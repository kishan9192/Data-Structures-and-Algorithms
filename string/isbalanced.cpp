#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool isBalanced(char s[], int i, int l)
{
     if(s[i] == '\0')
     {
          return true;
     }
     static int counta=0;
     static int countb=0;
     static int countc=0;

     if((i == 0 && s[i] == ']') || (i == 0 && s[i] == '}') || (i == 0 && s[i] == ')'))
          return false;
     if((i==(l-1) && s[i] == '[') || (i==(l-1) && s[i] == '{') || (i==(l-1) && s[i] == '('))
          return false;

     if(s[i] == '[')
     {
          counta++;
     }
     if(s[i] == ']')
     {
          counta--;
     }
     if(s[i] == '{')
          {
               countb++;
          }
     if(s[i] == '}')
     {
          countb--;
     }
     if(s[i] == '(')
     {
          countc++;
     }
     if(s[i] == ')')
     {
          countc--;
     }
     isBalanced(s,i+1,l);
     if((counta + countb + countc) == 0)
     {
          return true;
     }
     else
          return false;
}
int main()
{
     char s[100];
     gets(s);
     int l = strlen(s);
     if(isBalanced(s,0,l))
     {
          cout<<"true";
     }
     else
     {
          cout<<"false";
     }
  //   puts(s);

}
