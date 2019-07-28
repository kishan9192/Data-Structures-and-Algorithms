#include<bits/stdc++.h>
using namespace std;
int main()
{
     char s[1000];
     cin>>s;
     cout<<"String is " <<s;
     int l = strlen(s);
     cout<<endl;
     cout<<"Length of string is " <<l;
     cout<<endl;
     for(int i = 0; i<l; i++)
     {
               if(s[i]==s[i+1])
               {
                    cout<<s[i];
                    cout<<"*";
               }
                else
          {
               cout<<s[i];
          }
          }


}
