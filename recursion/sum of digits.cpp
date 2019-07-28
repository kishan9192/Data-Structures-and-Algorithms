
#include<iostream>
using namespace std;
int cnt(int n)
{    static int ans =0;
     if(!(n > 0) ){
         return 0;
        } else
     {
         return (n%10)+cnt(n/10);
     }
}
int main()
{
     int n;
     cin>>n;

      cout<<"Sum of digits =  "<<cnt(n);
     return 0;
}
