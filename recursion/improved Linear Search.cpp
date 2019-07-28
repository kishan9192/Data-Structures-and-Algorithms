#include<iostream>
using namespace std;
int index(int a[], int l, int r, int x)
{
     if(l>r)
     {
          return -1;
     }
     if(x == a[l])
     {
          return l;
     }
      if(x == a[r])
     {
          return r;
     }
     else
          return index(a,l+1,r-1,x);
}
int main()
{
     int a[] = {4,3,7,6,10,2,1,9,5,8};
     int l = 0;
     int r = 9;
     int x;

     cout<<"Enter the element to be searched ";
     cin >>x;
     int ls = index(a,l,r,x);
     cout<<endl;
     if(ls == -1)
     {
          cout<<" Element is not present ";
     }
     cout<<"Element " <<x<<" is present at " <<ls+1;
     return 0;
}
