#include<iostream>
using namespace std;
int sum(int a[], int n)
{
     static int ans = 0;
     if(n == 0)
     {
          return 0;
     }
     else
     {
          ans = ans + a[0];
          sum(a+1, n-1);
     }
     return ans;
}
int main()
{
     int a[] = {1,2,3,4};
     cout<<"Sum of array is = "<<sum(a,4);
     return 0;
}
