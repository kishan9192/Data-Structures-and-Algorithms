#include<bits/stdc++.h>
using namespace std;
int triple(string s, int i)
{
     static int cnt = 0;
     if(s[i] == '\0')
     {
          return 0;
     }
     if(s[i] == 'a' && s[i+1] == 'a' && s[i+2] =='a' )
     {
          cnt++;
          triple(s,i+3);
     }
     else
     {
          triple(s,i+1);
     }
     return cnt;
}
int main()
{
     string str;
     cin>>str;
     cout<<"Number of times AAA is appearing is "<<triple(str,0);
}
