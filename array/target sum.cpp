#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int j = n-1;
	i=0;
	int e;
	cin>>e;
	while(i<j)
	{
		if((a[i]+a[j])>e)
		{
			j--;
		}
		else if((a[i]+a[j])<e)
		{
			i++;
		}
		else if((a[i]+a[j])==e)
		{
			cout<<a[i]<<" and "<<a[j]<<endl;
			i++;
			j--;
		}
	}
	return 0;
}
