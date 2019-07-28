#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool compare(string a, string b)
{
     if(a.length() == b.length())
     {
          return a<b;
     }
     else
     {
          return a.length()<b.length();
     }
}
int main()
{
     vector <string> s;
     int i;
     string str;
     for(i=0; i<4;i++)
     {
          cin>>str;
          s.push_back(str);
     }
     sort(s.begin(), s.end(), compare);
     for(i=0;i<s.size();i++)
     {
          cout<<s[i]<<"\n";
     }
}
