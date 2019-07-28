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
    int i=0;
    while(i<n)
    {
        int cnt = 0;
        for(int j= i+1; j<n; )
        {
            if(isanagram(v[i],v[j]) == true)
            {
                cnt++;
               // cout<<v[j]<<" ";
                v.erase(find(v.begin(), v.end(), v[j]));
            }
            else
            {
                j++;
            }
           // cout<<v[j]<<" ";
            n = v.size();

        }
            cnt++;
            cout<<cnt<<" ";

            v.erase(find(v.begin(), v.end(), v[i]));
            //cout<<v[1];
            n = v.size();
            i=0;
    }
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       vector<string>v;
       for(int i=0;i<n;i++)
       {
           string s;
           cin>>s;
           v.push_back(s);
       }
       findallanagrams(v);
       cout<<endl;
       v.clear();
   }

    return 0;
}
