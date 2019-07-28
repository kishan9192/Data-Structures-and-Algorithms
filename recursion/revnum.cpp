#include<bits/stdc++.h>
using namespace std;
int revnum(int n)
{
     static int ans = 0;
     if(n==0)
     {
          return 0;
     }
     else
     {
          ans = ans*10 + n%10;
          revnum(n/10);
     }
     return ans;
}
int main()
{
     int n;
     cin>>n;
     cout<<"Reverse of " << n <<" is "<<revnum(n);
     return 0;
}
