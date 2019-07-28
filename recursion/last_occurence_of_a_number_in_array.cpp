#include<bits/stdc++.h>
using namespace std;
int ls(int a[], int n, int e)
{
      if(n==0)
     {
          return -1;
     } else {
          if(a[n-1]==e)
          {
               return n-1;
          }
     }

     int pos = ls(a,n-1,e);
     //cout << pos << " ";
     return pos;


}
int main() {
    int n;
    cin>>n;
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int e;
    cin>>e;
    int pos = ls(a,n,e);
    cout<<pos;
	return 0;
}
