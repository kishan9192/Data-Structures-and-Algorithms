#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
bool isanagram(string s1, string s2)
{
    int l1 = s1.length();
    int l2 = s2.length();
    unordered_map<char,int>m;
    if(l1 != l2)
    {
        return false;
    }
    for(int i=0;i<l1;i++)
    {
        m[s1[i]]++;
    }

    for(int i=0;i<l2;i++)
    {
        if(m.find(s2[i]) == m.end())
        {
            return false;
        }
        else
        {
            m[s2[i]]--;
            if(m[s2[i]] == 0)
            {
                m.erase(s2[i]);
            }
        }
    }
    return m.size()==0;
}

void findallanagrams(vector<string> &v)
{
    int n = v.size();
    for(int i=0;i<n;i++)
    {
        for(int j= i+1; j<n; j++)
        {
            if(isanagram(v[i],v[j]))
            {
                cout<<v[i]<<" is anagram of "<<v[j]<<endl;
            }
        }
    }
}
int main()
{
    vector<string>v;
    v.push_back("geeksquiz");
    v.push_back("geeksforgeeks");
    v.push_back("abcd");
    v.push_back("forgeeksgeeks");
    v.push_back("zuiqkeegs");
   // cout<<v[0];
   findallanagrams(v);
    return 0;
}
