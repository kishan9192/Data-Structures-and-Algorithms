#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int e;
    cin>>e;
    cout<<"sdgsd";
    for(i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
         {
              for(int k=j+1;k<n;k++)
              {

                   if((a[i]+a[j]+a[k]) == e)
                   {
                        cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
                   }
              }
         }
    }
}
