//https://www.sanfoundry.com/dynamic-programming-solutions-bytelandian-gold-coins-problem/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll int gold(ll int  n, ll int  dp[])
{

	if(n<10)
	{
		return n;
	}
	if(n<1000000)
	{
	if(dp[n] != 0)
	{
		return dp[n];
	}
	else
	{
	ll res = gold(n/2,dp) + gold(n/3,dp) + gold(n/4,dp);
	dp[n] = max(res,n);
	return dp[n];
	}
	}
	ll int r = gold(n/2,dp) + gold(n/3,dp)+ gold(n/4,dp);
	return max(r,n);
}
int main()
{
	ll int n;
	cin>>n;
	ll int dp[1000000] = {0};
	cout<<gold(n,dp);
}