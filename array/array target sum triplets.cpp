#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int a[n];
     int i;
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);
     int k;
     cin>>k;
     for(i=0;i<n;i++)
     {
          int l = i+1;
          int r = n-1;
          while(l<r)
          {
               if((a[l]+a[r]+a[i]) > k)
               {
                    r--;
               }
               else if((a[l]+a[r]+a[i])<k)
               {
                    l++;
               }
               else if((a[l]+a[r]+a[i])==k)
               {
                    cout<<a[i]<<", "<<a[l]<<" and "<<a[r]<<endl;
                    l++;
                    r--;
               }

          }
     }
}
