#include<iostream>
using namespace std;
int cnt(int n)
{
     if(n == 0)
     {
          return 0;
     }
     else
     {
          return 1+cnt(n/10);
     }
}
int main()
{
     int n;
     cin>>n;
     cout<<"Number of digits = "<<cnt(n);
     return 0;
}
