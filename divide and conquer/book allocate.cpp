#include<bits/stdc++.h>
using namespace std;
bool isValid(int a[], int n, int s, int ans)
{
	int students = 1;
	int c_book
}
int bookallocate(int a[], int n, int s)
{
	int totalpages = 0;
	for(int i = 0; i<n; i++)
	{
		totalpages += a[i];
	}
	int start = a[n-1];
	int end = totalpages;
	int finalans = start;
	while(start<=end)
	{
		int mid = (start+end)/2;
		if(isValid(a,n,s,mid));
		{
			finalans = mid;
			end = mid-1;
		}
		else
		{
			start = mid+1;
		}
	}
	return finalans;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int b,s;
		cin>>b>>s;
		int a[b];
		int i;
		for(i=0;i<b;i++)
		{
			cin>>a[i];
		}
		sort(a,a+b);
		cout<<bookallocate(a,b,s)<<endl;
	}
	return 0;
}
