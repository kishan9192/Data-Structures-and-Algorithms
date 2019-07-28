#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    string s;
    getline(cin,s);
    if(str.compare(s) == 0 && (str.length() == s.length()))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
