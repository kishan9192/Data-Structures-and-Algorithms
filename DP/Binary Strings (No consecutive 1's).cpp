#include<bits/stdc++.h>
using namespace std;
long long int binarystrings(long long int n,long long int lastbit, long long int dp[][100])
{
    long long int ans = 0;
    dp[0][0] = 1;
    dp[1][0] = 1;
    if(dp[lastbit][n-1] != -1)
    {
        return dp[lastbit][n-1];
    }
    if(lastbit == 0)
    {
        ans += binarystrings(n-1,0,dp) + binarystrings(n-1, 1,dp); /// append 0 and 1 if the lastbit is 0.
        dp[lastbit][n-1] = ans; /// using n-1 for array because array is 0 indexed.
    }
    else
    {
        ans += binarystrings(n-1,0,dp); /// append only zero if the last digit is 1.
        dp[lastbit][n-1] = ans;
    }
    return dp[lastbit][n-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int dp[2][100];
        memset(dp, -1, sizeof dp);
        long long int n;
        cin>>n;
        long long int m = binarystrings(n,0,dp);
        long long int l = binarystrings(n,1,dp);
        cout<<m+l<<endl;
    }
}
