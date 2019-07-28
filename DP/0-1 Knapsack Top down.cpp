#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[], int price[], int n, int c, int dp[][1001])
{
    if(n == 0 || c == 0)
    {
        return 0;
    }
    if(dp[n][c] != -1)
    {
        return dp[n][c];
    }
    int inc = INT_MIN;
    int exc = INT_MIN;
    if((c-wt[n-1]) >=0)
    {
        inc = price[n-1] + knapsack(wt,price, n-1, c-wt[n-1], dp);
    }
    exc = knapsack(wt, price, n-1, c, dp);
    dp[n][c] = max(inc,exc);
    return dp[n][c];

}
int main()
{
    int n,c;
    cin>>n>>c;
    int i;
    int wt[n];
    for(i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    int price[n];
    for(i = 0;i<n;i++)
    {
        cin>>price[i];
    }
    int dp[1001][1001];
    memset(dp, -1, sizeof dp);
    cout<<knapsack(wt,price,n,c,dp);
}
