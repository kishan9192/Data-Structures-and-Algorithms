#include<bits/stdc++.h>
using namespace std;
int maxdiv(int a, int b)
{
	while(a%b == 0)
	{
		a = a/b;
	}
	return a;
}
bool isUgly(float n)
{
	n = maxdiv(n,2);
	n = maxdiv(n,3);
	n = maxdiv(n,5);
	if(n == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int getugly(float n)
{
	int i=1;
	int cnt = 1;
	while(n>cnt)
	{
		i++;
		if(isUgly(i))
		{
			cnt++;
		}
	}
	return i;
}
int main()
{
	int t;
	cin>>t;
	while(t-- > 0)
	{
	float n;
	cin>>n;
	cout<<getugly(n);
	cout<<endl;
	}
}
