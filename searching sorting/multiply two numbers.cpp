#include<bits/stdc++.h>
using namespace std;
int multiply(int a, int b)
{
     // Base Condition
     if(b == 1)
     {
          return a;
     }
     else
     {
          return a+multiply(a,b-1);
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
