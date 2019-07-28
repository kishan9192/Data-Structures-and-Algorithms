#include<bits/stdc++.h>
using namespace std;
void LCS(char *a, char *b, int m, int n)
{
	int dp[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i ==0 || j==0)
			{
				dp[i][j] = 0;
			}
			else if(a[i-1] == b[j-1])
			{
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	int i=m;
	int j = n;
	int index = dp[i][j];
	char *arr = new char[index];
	while(i>0 && j>0)
	{
		if(a[i-1] == b[j-1])
		{
			arr[index-1] = a[i-1];
			i--;
			j--;
			index--;
		}
		else if(dp[i-1][j] > dp[i][j-1])
		{
			i--;
		}
		else
		{
			j--;
		}
	}
	cout<<arr;
}
int main()
{
	char a[1001];
	char b[1001];
	cin>>a>>b;
	int m = strlen(a);
	int n = strlen(b);
	LCS(a,b,m,n);
}
