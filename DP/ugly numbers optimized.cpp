#include<bits/stdc++.h>
using namespace std;
long long int nthugly(long long int n)
{
	 long long int ugly[n];
	ugly[0] = 1;
 	 long long int next2 = 2; // next multiple of 2
	 long long int next3 = 3;
	 long long int next5 = 5;
	 long long int nextugly;
	 long long int i2 = 0, i3 = 0, i5 = 0;
	for(int i = 1; i<n;i++)
	{
		nextugly = min(next2, min(next3, next5));
		ugly[i] = nextugly;

		if(nextugly == next2)
		{
			i2 = i2+1;
			next2 = ugly[i2]*2;
		}

		if(nextugly == next3)
		{
			i3 = i3+1;
			next3 = ugly[i3]*3;
		}

		if(nextugly == next5)
		{
			i5 = i5+1;
			next5 = ugly[i5]*5;
		}
	}
	return nextugly;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	cout<<nthugly(n);
	cout<<endl;
	}
	return 0;

}