#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int i,j;
    if((n>0 &&  n<=10) &&(m >0 && m<=10))
{

 int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(j=0;j<m;j++)
    {
         if(j%2 ==0)
         {
               for(i=0;i<n;i++)
               {
                         cout<<a[i][j]<<", ";


               }
         }
         else
         {
              for(i=n-1;i>=0;i--)
              {
                   cout<<a[i][j]<<", ";
              }
         }
    }
        cout<<"END";
}
	return 0;
}
