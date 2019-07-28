#include<bits/stdc++.h>
#include<set>
using namespace std;
set<string>v;
void permute(char s[], int i)
{
     if(s[i] == '\0')
     {
          v.insert(s);
          return;
     }
     for(int j = i; s[j]!='\0'; j++)
     {
          swap(s[i], s[j]);
          permute(s, i+1);
          swap(s[i], s[j]);
     }
}
int main()
{
     char s[1000];
     cin>>s;
     int i=0;
     permute(s,i);
     //sort(v.begin(), v.end());
     set <string> :: iterator itr;
     for(itr = v.begin(); itr!=v.end(); itr++)
     {
          cout<<*itr<<endl;
     }
     return 0;
}
