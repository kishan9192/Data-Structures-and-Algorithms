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
    int lbst[n],rbst[n];
   for(i = 0; i<n; i++)
   {
        lbst[i] = a[0];
        rbst[i] = a[n-1];
   }
/*   cout<<"Lbst";
   for(i=0;i<n;i++)
   {
        cout<<lbst[i]<<" ";
   }
   cout<<endl;
   cout<<"rbst ";
   for(i=0;i<n;i++)
   {
        cout<<rbst[i]<<" ";
   }*/
   int mx = a[0];
    for(i = 0; i<n; i++)
    {
        if(a[i]>mx)
        {
            mx = a[i];
        }
          lbst[i] = mx;
    }
    int rmx = a[n-1];
    for(i = n-1; i>=0; i--)
    {
        if(a[i]>rmx)
        {
             rmx = a[i];
        }
                    rbst[i] = rmx;

    }
    int sum = 0;
    for(i=0;i<n;i++)
    {
        sum += min(lbst[i],rbst[i]) - a[i];
    }
    cout<<sum;
}
