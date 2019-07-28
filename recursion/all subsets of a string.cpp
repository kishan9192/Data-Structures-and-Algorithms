#include<bits/stdc++.h>
using namespace std;
void subsets(char s[], char op[], int i, int j )
{
     if(s[i] == '\0')
     {
          op[j] = '\0';
          cout<<op<<endl;
          return;
     }
     op[j] = s[i];
     subsets(s,op,i+1,j+1);
     subsets(s,op,i+1,j);
}
int main()
{
     char s[100];
     cin>>s;
     char op[100];
     subsets(s,op,0,0);
}

