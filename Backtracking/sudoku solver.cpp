#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool canplace(int a[][100], int n, int i, int j, int number)
{
	int x;
	for(x=0;x<n;x++)
	{
		if((a[x][j]) == number || (a[i][x]) == number)
		{
			return false;
		}
	}
		int root = sqrt(n);
		int sx = (i/root)*root;
		int sy = (j/root)*root;
		for(x = sx; x<(sx+root); x++)
		{


			for(int y = sy; y<(sy+root); y++)
			{
				if((a[x][y]) == number)
				{
					return false;
				}
			}
		}
		return true;
	}
bool solvesudoku(int a[][100], int n, int i, int j)
{
	if(i==n)
	{
		/*for(int x = 0; x<n; x++)
		{
			for(int y = 0; y<n; y++)
			{
				cout<<a[x][y]<<" ";
			}
			cout<<endl;
		}*/
		return true;
	}
	if(j == n)
	{
		return solvesudoku(a,n,i+1,0);
	}
	if(a[i][j]!=0)
	{
		return solvesudoku(a,n,i,j+1);
	}

	for(int number = 1; number<=n; number++)
	{
		if(canplace(a,n,i,j,number))
		{
			a[i][j] = number;
			if(solvesudoku(a,n,i,j+1) == true)
			{
				return true;
			}
		}
	}
	a[i][j] = 0;
	return false;
}
int main()
{
	int n;
	cin>>n;
	int a[100][100];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	solvesudoku(a,n,0,0);

	for(int x = 0; x<n; x++)
		{
			for(int y = 0; y<n; y++)
			{
				cout<<a[x][y]<<" ";
			}
			cout<<endl;
		}
}
