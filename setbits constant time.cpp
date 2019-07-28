#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    	int a,b,i,ans;

	    cin>>a>>b;
		ans = 0;
		for(i = a; i <= b; i++)
		{
			while(i > 0 & i!=1)
			{
				i = i&(i-1);
				ans++;
			}
			if(a==1 && b==1)
			{
			    ans = 1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
