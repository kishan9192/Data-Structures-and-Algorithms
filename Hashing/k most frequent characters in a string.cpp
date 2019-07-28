#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    string s = "Welcome to the world of Geeks This portal has been created to provide well written well thought and well explained solutions for selected questions If you like Geeks for Geeks and would like to contribute here is your chance You can write article and mail your article to contribute at geeksforgeeks org See your article appearing on the Geeks for Geeks main page and help thousands of other Geeks";
    unordered_map<string,int> m;
    stringstream ss(s);
    string word;
    while(ss >> word)
    {
        m[word]++;
    }
    for(auto x : m)
    {
        if((x.second)>=3)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
}
