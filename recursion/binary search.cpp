#include<iostream>
using namespace std;
int position(int a[], int l,int h, int e)
{
          if(l<h)
          {
               int mid = (l+h)/2;
               if(a[mid]==e)
               {
                    return mid;
               }
               else if(a[mid]>e)
               {
                    position(a,l,mid-1,e);
               }
               else if(a[mid]<e)
               {
                    position(a,mid+1,h,e);
               }
          }
          else
          {
               return -1;
          }
}
int main()
{
     int a[] = {1,2,3,9,11,34,4};
     cout<<"Enter element to be searched ";
     int e;
     cin>>e;
     int index = position(a,0,6,e);
     if(index == -1)
     {
          cout<<"Element is not present";
     }
     else
     {
   cout<<"Element " << e <<" is present at  " <<index+1;
     }
     return 0;
}
