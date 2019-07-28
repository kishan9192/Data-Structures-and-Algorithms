#
#include<iostream>
using namespace std;
int position(int a[], int n, int e)
{
     static int pos = 0;
     if(n< -1 )
     {
          return -1;
     }
     if(a[0] == e)
     {
          return pos+1;
     }
     else
     {
          pos++;
          position(a+1, n-1, e);
     }
}
int main()
{
     int a[] = {1,2,3,9,11,34,4};
     cout<<"Enter element to be searched ";
     int e;
     cin>>e;
     int index = position(a,7,e);
     if(index == -1)
     {
          cout<<"Element is not present";
     }
     else
     {


     cout<<" Element " << e <<" is present at  " <<index;
     }
     return 0;
}
