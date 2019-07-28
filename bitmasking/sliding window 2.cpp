


#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int a, int b)
{
     int i;
     for(i=a;i<b;i++)
     {
          cout<<arr[i]<<"\t";
     }
}
int main()
{
     int a[9] = {2,3,5,7,1,6,4,8,2};
     int n = 9;
     int i;
     int j,k;
     int window = 0;
     cout<<"Enter the amount of area required " ;
     cin>>k;
       i=0;
          j=0;
     while(i<9 && j<9)
     {

          if(window < k)
          {
               window += a[j];
               j++;
          }
           if(window > k)
          {
               window -= a[i];
               i++;
          }
          if(window == k)
          {    cout<<"\nDimensions/BLocks for plot are ";
               display(a,i,j);
               j++;
               window += a[j];
               while(i!=j)
               {
                    window -=a[i];
                    i++;
                    cout<<"\nValues of i "<<a[i];
               }
          }

     }
     return 0;
}
