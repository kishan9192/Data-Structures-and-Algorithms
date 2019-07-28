#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void stringtointeger(string s, int l)
{
    static int digit = 0;
    if(l==0)
    {return;}
    digit = digit*10 + ( (s[0])-'\0');
    stringtointeger(s.substr(1,s.length()),l-1);
    cout<<digit;
}
int main() {
    char str[1000];
    cin>>str;
    int l = strlen(str);
    stringtointeger(
s,l);
	return 0;
}
