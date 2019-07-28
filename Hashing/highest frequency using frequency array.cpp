#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=m)
        {
            m = a[i];
        }
    }
    int freq[m+1] = {0};
    for(int i=0;i<=m;i++)
    {
        freq[a[i]]++;
    }
    int mx = 0;
    for(int i=0;i<=m;i++)
    {
        if(freq[i]>=mx)
        {
            mx = freq[i];
        }
    }
    cout<<mx;
}