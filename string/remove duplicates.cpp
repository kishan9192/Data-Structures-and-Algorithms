#include<bits/stdc++.h>
using namespace std;
void duplicate(char s[], char op[], int i, int j)
{
     if(s[i] == '\0')
     {
          op[j] = '\0';
          cout<<op;
          return;
     }
     if(s[i] != s[i+1])
     {
          op[j] = s[i];
          duplicate(s,op,i+1,j+1);
     }
     else
     {
          duplicate(s,op,i+1,j);
     }
}
int main()
{
     char s[1000];
     cin>>s;
     char op[1000];
     duplicate(s,op,0,0);
}
