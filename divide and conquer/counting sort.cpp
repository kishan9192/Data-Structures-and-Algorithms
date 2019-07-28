#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max = a[0];
	for(i = 0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	int freq[max+1] = {0};
	for(i=0;i<n;i++)
	{
		freq[a[i]] += 1;
	}


	for(i=0;i<max;i++)
	{
	//	cout<<freq[i]<<" ";
	}

	int j = 0;
	int output[n];
	for(i = 0; i<=max; i++)
	{
		while(freq[i]!=0)
		{
			output[j] = i;
			freq[i]--;
			j++;
		}
	}



	for(i=0;i<n;i++)
	{
		cout<<output[i]<<" ";
	}

	return 0;
}
