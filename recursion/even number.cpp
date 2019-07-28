#include<iostream>
using namespace std;
bool isEven(int n)
{
     if(n == 0)
     {
          return 1;
     }
     if(n == 1)
     {
          return 0;
     }
     else
     {
          return isEven(n-2);
     }
}
int main()
{
     int n;
     cin>>n;
     if(isEven(n))
     {
          cout<<"Even number " <<endl;
     }
     else
     {
          cout<<"Odd number ";
     }
     return 0;
}
