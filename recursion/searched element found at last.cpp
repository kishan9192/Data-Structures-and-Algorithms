/*
Take as input N, the size of array.
Take N more inputs and store that in an array.
Take as input M, a number.
Write a recursive function which returns the last index at which M is found in the array and -1 if M is not found anywhere.
Print the value returned.
*/
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
