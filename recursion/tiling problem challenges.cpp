#include<bits/stdc++.h>
using namespace std;
int tiling(int n, int m)
{
    if(n<m)
    {
        return 1;
    }
    else
    {
        return (tiling(n-1,m)+tiling(n-m,m));
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<tiling(n,m)<<endl;
    }

}
