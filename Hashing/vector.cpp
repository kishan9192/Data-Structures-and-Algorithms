#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v1,v2;
	for(int i=0;i<n;i++)
	{
		int e;
		cin>>e;
		v1.push_back(e);
	}
	for(int i=0;i<n;i++)
	{
		int e;
		cin>>e;
		vector<int> :: iterator it;
		it = find(v1.begin(), v1.end(), e);
		{
			if((*it)>=0 && (*it)<n)
			{
				cout<<*it<<" ";
				//v2.push_back(e);
			}
		}
	}
}
