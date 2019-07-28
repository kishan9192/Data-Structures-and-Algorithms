#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	int t;
	cin>>t;
	int ans;
	while(t--)
	{
		cin>>a>>b;
		ans = 0;
		for(int i = a; i<=b; i++)
		{
			ans += __builtin_popcount(i);
		}
	}
	cout<<ans<<endl;

	return 0;
}
