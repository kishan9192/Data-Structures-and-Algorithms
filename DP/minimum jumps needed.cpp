#include<bits/stdc++.h>
using namespace std;
int minimumjumps(vector<int> &v, int n)
{
	int minjumps[n];
	minjumps[0] = 0;
	for(int i=1;i<n;i++)
	{
		minjumps[i] = INT_MAX;
	}
/*	for(int i=0;i<n;i++)
	{
		cout<<minjumps[i]<<" ";
	}
	cout<<endl;
	cout<<v[2]<<"VEctor ka 2";
	cout<<endl;*/
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(j+v[j] >= i)
			{
				minjumps[i] = min(minjumps[i], minjumps[j]+1);
			}
		}
	}
/*	cout<<"VEctor in i"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<v[i];
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<minjumps[i]<<" ";
	}
	cout<<endl;
	for(auto x:v)
		{
			cout<<x<<",";
		}
		cout<<endl;*/
	return minjumps[n-1];
}
int main()
{
	int t;
	cin>>t;
	while(t-- >0)
	{
		int n;
		cin>>n;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int e;
			cin>>e;
			v.push_back(e);
		}
	/*	for(auto x:v)
		{
			cout<<x<<",";
		}
		cout<<endl;*/
		cout<<minimumjumps(v,n)<<endl;
		v.clear();
	}
}