#include<bits/stdc++.h>
using namespace std;
void replacepi(char s[], int i)
{
     if(s[i] == '\0' || s[i+1] == '\0')
     {
          cout<<s;
          return;
     }
     if(s[i] == 'p' && s[i+1] =='i')
     {
          int j = i+2;
          while(s[j] != '\0')
          {
               j++;
          }
          while(j>=i+2)
          {
               s[j+2] = s[j];
               j--;
          }
          s[i] = '3';
          s[i+1] = '.';
          s[i+2] = '1';
          s[i+3] = '4';

          replacepi(s,i+4);
    //      cout<<s;
          return;
     }

     else
     {
          replacepi(s,i+1);
          return;

     }
}
int main()
{
     char str[100000];
     cin>>str;
     replacepi(str,0);
}
