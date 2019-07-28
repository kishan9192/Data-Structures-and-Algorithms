#include<bits/stdc++.h>
using namespace std;
void duplicate(char s[], int i)
{
    static int l = strlen(s);
    if(i == l)
    {
        return;
    }
        if(s[i]==s[i+1])
        {
            cout<<s[i];
            cout<<"*";
        }
        else
        {
             cout<<s[i];
        }
        duplicate(s,i+1);
        return;
}
int main()
{
    char s[10000];
    cin>>s;
    duplicate(s,0);
}
