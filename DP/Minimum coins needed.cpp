#include <iostream>
#include<bits/stdc++.h>
#define INF 100000000
using namespace std;
int min_cost(int cost[],int n,int W)
{
   vector<int> wt,val;
   int size=0;
   for(int i=0;i<n;i++)
   {
       if(cost[i]!=-1)
       {
           val.push_back(cost[i]);
           wt.push_back(i+1);
           size++;
       }
   }
   n=size;
   int dp[n+1][W+1];
   for(int i=0;i<=W;i++)
   {
       dp[0][i]=INF;
   }
   for(int i=1;i<=n;i++)
   {
       dp[i][0]=0;
   }
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=W;j++)
       {
           if(wt[i-1]>j)
           {
               dp[i][j]=dp[i-1][j];
           }
           else
           {
               dp[i][j]=min(dp[i-1][j],dp[i-1][j-wt[i-1]]+val[i-1]);
           }
       }
   }
    return (dp[n][W]==INF)? -1:dp[n][W];
}
int main() {
   int W,n;
   cin>>n>>W;
   int cost[W];
   for(int i=0;i<W;i++)
   {
       cin>>cost[i];
   }
   int N = sizeof(cost)/sizeof(cost[0]); 
   cout<<min_cost(cost,N,W);
}