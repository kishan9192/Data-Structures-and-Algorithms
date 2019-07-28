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
         return(a.length() < b.length());
    }
}
int main()
{
    vector<string> v;
    int n;
    cin>>n;
string str;
    while(n--)
    {
        cin>>str;
        v.push_back(str);
    }
    sort(v.begin(),v.end(), compare);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    v.clear();
    return 0;
}
