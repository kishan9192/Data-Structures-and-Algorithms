///https://www.techiedelight.com/maximum-sum-circular-subarray/



#include<bits/stdc++.h>
using namespace std;
int minkadane(vector<int> &v)
{
    int minsofar=0, minend=0;
    int n = v.size();
    for(int i=0;i<n;i++)
    {
        minend +=v[i];
        if(minend>0)
        {
            minend = 0;
        }
        if(minsofar>minend)
        {
            minsofar = minend;
        }
    }
    return minsofar;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            int e;
            cin>>e;
            v.push_back(e);
            sum +=e;
        }
        //cout<<sum;
        //cout<<endl;

        int ans = sum - minkadane(v);
        cout<<ans<<endl;
        v.clear();
    }
}
