#include<bits/stdc++.h>
using namespace std;
void stringtointeger(string s, int l)
{
    static long long int digit = 0;
    static int k = l;
    if(l==0)
    {return;}
    else
     {
          digit = digit*10 + ( (s[0])-'0');
          stringtointeger(s.substr(1,s.length()),l-1);
          if(s.length() != k)
          {
               return;
          }
    }
    cout<<digit;
}
int main() {
    string s;
    cin>>s;
    int l = s.length();
    stringtointeger(s,l);
	return 0;
}
