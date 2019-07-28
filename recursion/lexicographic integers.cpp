#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    vector<string>v;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        string s = to_string(i);
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(auto x :v)
    {
        cout<<x<<" ";
    }
return 0;
}
