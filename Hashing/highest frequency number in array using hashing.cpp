#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int> h {0};
	for(int i=0;i<n;i++)
	{
		h[a[i]]++;
	}
	int res = -1;
	int maxcount = 0;
	for(auto x: h)
	{
		if(x.second > maxcount)
		{
			res = x.first;
			maxcount = x.second;
		}
	}
	cout<<res;
}