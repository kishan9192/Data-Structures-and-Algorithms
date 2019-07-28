#include<bits/stdc++.h>
using namespace std;
bool issafe(int a[][22], int n, int i, int j)
{
     int x = i;
     int y = j;
     for(x=0; x<i; x++)
     {
          if(a[x][y] == 1)
          {
               return false;
          }
     }
     x=i;
     y=j;
     while(x>=0 && y>=0)
     {
          if(a[x][y] == 1)
               return false;
          x--;
          y--;
     }
     x=i;
     y=j;
     while(x>=0 && y<n)
     {
          if(a[x][y] == 1)
               return false;
          x--;
          y++;
     }
     return true;
}
int  countnkings(int a[22][22], int n, int i)
{
    static int ans = 0;
     if(i==n)
     {
          ans++;
          return 0;
     }

     for(int j = 0; j<n; j++)
     {
          if(issafe(a,n,i,j))
          {
               a[i][j] = 1;
                countnkings(a,n,i+1);
          }
          a[i][j] = 0;
     }
     return ans;
}
int main()
{
     int n;
     cin>>n;
     int a[22][22] = {0};
     int i;
     cout<<countnkings(a,n,0)<<endl;

}
