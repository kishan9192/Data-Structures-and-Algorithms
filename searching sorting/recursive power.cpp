#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int power(int a, int n)
{
     if(n==0)
     {
          return 1;
     }
     if(n&1)
     {
          return pow((power(a,n/2) ),2)*a;
     }
     else
     {
          return pow(power(a,n/2) ,2);
     }
}
int main()
{

     int a,n;
     cin>>a>>n;
     cout<<"power is ";
          int p = power(a,n);
          cout<<p;
          return 0;
}
