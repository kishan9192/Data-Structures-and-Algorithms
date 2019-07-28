#include<iostream>
using namespace std;
float squareroot(int n, int p)
{

     int s = 0;
     int e = n;
     float ans = 0;
     while(s<=e)
     {
          int mid = (s+e)/2;
          if((mid*mid) <=n)
          {

               ans = mid;
               s= mid+1;
          }
          else
          {
               e= mid-1;
          }
          float inc = 0.1
          for(int k =0; k<=p; k++)
          {
               while((ans*ans)<=n)
               {
                    ans+=inc;

               }
               ans = ans - inc;
               inc = inc/10;
          }

     return ans;
}
int main()
{
     int n,p;
     cin>>n>>p
     cout<<squareroot(n,p);
}

