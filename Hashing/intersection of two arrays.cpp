#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<long long int>v1,v2,v3;
	for(long long int i=0;i<n;i++)
	{
		long long int e;
		cin>>e;
		v1.push_back(e);
	}
	for(long long int i=0;i<n;i++)
	{
		long long int e;
		cin>>e;
		v2.push_back(e);
	}
	
	cout<<"[";
	for(long long int i=0;i<n;i++)
	{
		for(int j=0; j<n; j++)
		{
		if(v2[i] == v1[j])
		{
			v3.push_back(v2[i]);
			v1[j] = -1;
			break;
		}
		}
	}
	sort(v3.begin(),v3.end());
	long long int s = v3.size();
	for(long long int i=0;i<s;i++)
	{
		cout<<v3[i];
		if(i != s-1)
		{
			cout<<", ";
		}
	}
	cout<<"]";
	v1.clear();
	v2.clear();
	v3.clear();
}