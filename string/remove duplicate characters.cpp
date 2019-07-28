#include<bits/stdc++.h>
#include<vector>
using namespace std;
void duplicate(vector<string> &s, int i)
{
    static int l = s.size();
    if(i == l)
    {
        return;
    }
        if(s.at(i)==s.at(i+1))
        {
            cout<<s.at(i);
            vector<string>::iterator itr = s.begin();
            advance(itr, i+1);
           s.erase( itr);
        }
        else
        {
             cout<<s.at(i);
        }
        duplicate(s,i+1);
        return;
}
int main()
{
    vector<string> s;
    int i=10000000;

    duplicate(s,0);
}
