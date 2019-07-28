#include<bits/stdc++.h>
using namespace std;
int partition(long long int *a, int s, int e)
{
	int i = s-1;
	int j = s;
	int pivot = a[e];
	for(j=s;j<e;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[e]);
	return i+1;
}
void quicksort(long long int *a, int s, int e)
{
	if(s>=e)
	{
		return;
	}
	int p = partition(a,s,e);
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);
//	return;
}
int main()
{
	int n;
	cin>>n;
	int i;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
