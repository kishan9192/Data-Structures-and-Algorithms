#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[], int n, int m)
{
	int mid,pos;
	for(int i=0;i<n;i++)
	{
		int high = n-1;
		int low = 0;
		if(low<high)
          {
		mid = (low+high)/2;
		 if(a[i]==a[mid])
           {
                pos = mid+1;
                return pos;
           }
		else if(a[i]>a[mid])
          {
               binarysearch(a,)
          }
	}
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
	int m;
	cin>>m;
	int pos = binarysearch(a,n,0,n-1,m);
	cout<<pos;
	return 0;
}
