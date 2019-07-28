#include<bits/stdc++.h>
using namespace std;
int multiply(int a, int b)
{
     // Base Condition
     if(a<b)
     {
          return 0;
     }
     else
     {
          return 1+multiply(a-b,b);
     }
}
int main()
{
     int a,b;
     cin>>a>>b;

     int s = multiply(a,b);
     cout << s;
     return 0;
}
