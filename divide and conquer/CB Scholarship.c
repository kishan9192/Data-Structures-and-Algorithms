#include<iostream>
using namespace std;
int main() {
	long long int n,m,x,y,mid,s,e,ans;
	cin>>n>>m>>x>>y;
	s = 0;
	e = n;
	while(s<=e)
	{
		 mid = (s+e)/2;
		if((mid*x) <= m+(n-mid)*y)
		{
			ans = mid;
			s = mid+1;
		}
		else
		{
			ans = mid;
			e = mid-1;
		}
	}
	cout<<ans;
	return 0;
}
