#include<iostream>
using namespace std;
int rev(int n)
{
     static int ans = 0;
     if(n>0)
     {
          ans = ans *10 + n%10;
          rev(n/10);
     }
     else
          return 0;
     return ans;

}
int main()
{
int n;
cin>>n;
cout<<"Reverse of  "<<n <<"  is  " <<rev(n);
return 0;
}
