#include<iostream>
using namespace std;
int* sorted(int* a, int n)
{
     if(n == 1)
     {
          return a;
     }
     if(!(a[0]<a[1]))
     {
          swap(a[0],a[1]);
     }
     sorted(a+1,n-1);
     return a;
}
int main()
{
     int a[] = {1,2,3,9,11,34,4};
     cout<<"Array after sorting is ";
     int * arr = sorted(a,7);
     cout<<"\nAfter sorting ";
     for(int i = 0; i < 7; i++)
     {
          cout<< *arr[i];
     }
     return 0;
}
