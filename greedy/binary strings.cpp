#include<bits/stdc++.h>
using namespace std;
int binarystrings(int n,int lastbit, int dp[][100])
{
     int ans = 0;
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
        int dp[2][100] = {-1};
        int n;
        cin>>n;
        int m = binarystrings(n,0,dp);
        int l = binarystrings(n,1,dp);
        cout<<m+l<<endl;
    }
}