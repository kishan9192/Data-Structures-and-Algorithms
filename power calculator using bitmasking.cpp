#include<iostream>
using namespace std;
int main()
{
     int n,p;
     cin>>n>>p;
     int ans = 1;
     int temp = n;
     while(temp > 0)
     {
          if(p&1)
          {
               ans *= n;
          }
               n = n*n;
          temp = temp>>1;
     }
     cout<<ans;
     return 0;
}
