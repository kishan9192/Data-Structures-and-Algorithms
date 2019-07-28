#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    unordered_map<int,int> h;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int e;
        cin>>e;
        v.push_back(e);
        h.insert(make_pair(e,i));
    }
    for(auto y : h)
    {
        cout<<y.first<<" at "<<y.second<<" index "<<endl;
    }

    if(n==k)
    {
        sort(v.begin(),v.end(),greater<int>());
    }
    for(int j = n; j>=1;j--)
    {
        if(k>0)
        {
            int ini = h[j]; /// here j is 5 initially  j = num, its original index from hashmap is being extracted
            int best = n-j; /// best is the best index of the number. Like 5 should be at 0th index.
            if(ini != best)
            {
                h[j] = best; /// 5 is alloted the best index in hashmap. 5 is now mapped with 0.
                int element = v.at(best);   /// Change the index of the element which was at position 0. Swap the element basically. Here index of element i.e 3 will become 4 from 0
                h[element] = ini;
                swap(v[best],v[ini]);
                k--;
            }

        }

    }
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}
