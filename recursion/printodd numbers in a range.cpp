#include<iostream>
using namespace std;
void print(int a, int b)
{
     if(a>b)
     {
          return;
     }
     if(a&1)
     {
          cout<<a<<"   ";
     }
     print(a+1,b);
}
int main()
{
     int a,b;
     cin>>a>>b;
     print(a,b);
     return 0;
}
