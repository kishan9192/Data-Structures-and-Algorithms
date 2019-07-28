#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    for(i=0; i<s.length(); i++)
    {
        if(s[i] >= 65 && s[i] <=91 && i!=0)
        {
            cout<<"\n";
            //cout<<s[i];
        }
        cout<<s[i];
    }
    return 0;
}
