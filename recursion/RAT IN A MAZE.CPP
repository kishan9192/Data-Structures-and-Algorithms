#include<bits/stdc++.h>
using namespace std;
void singlepath(char a[][1000], char op[][1000], int i, int j, int n, int m)
{
     static int flag = 1;
     if(i == n && j == m && flag == 1)
     {
          a[i][j] = '1';
          for(int k = 1; k<=n; k++)
          {
               for(int l = 1; l<=m; l++)
               {
                    if(a[k][l] == '1')
                    {
                         op[k][l] = '1';
                    }
                    else
                    {
                         op[k][l] = '0';
                    }
               }
          }
          cout<<endl;
          for(int k = 1; k<=n; k++)
          {
               for(int l = 1; l<=m; l++)
               {
                    cout<<op[k][l]<<" ";
               }
               cout<<endl;
          }
          cout<<endl;
          flag--;
          a[i][j] = '0';

          return;
     }
        if(a[i][j] == 'X')
          {
               return;
          }
          if((i)>n || (j)>m)
          {
               return;
          }
               a[i][j] = '1';
               singlepath(a,op,i,j+1,n,m);
               singlepath(a,op,i+1,j,n,m);
               a[i][j] = '0';
               return;
}

int cntpath(char a[][1000], int i, int j, int n, int m)
{

     if(a[i][j] == 'X')
     {
          return 0;
     }

     if(i>n || j>m)
     {
          return 0;
     }

     if(a[i][j] == '1')
     {
          return 1;
     }
     int rightsepath = cntpath(a,i,j+1,n,m);
     int downsepath = cntpath(a,i+1,j,n,m);
     return (rightsepath+downsepath);
}

void printallpaths(char a[][1000], int i, int j, int n, int m)
{
     if(i == n && j == m)
     {
          a[i][j] = '1';
          for(i = 1; i<=n; i++)
          {
               for(j = 1; j<=m; j++)
               {
                    cout<<a[i][j]<<" ";
               }
               cout<<endl;
          }
          cout<<endl;
          a[i][j] = '0';
          return;
     }

     a[i][j] = '1';
     printallpaths(a,i,j+1,n,m);
     printallpaths(a,i+1,j,n,m);
     a[i][j] = '0';
     return;
}

int main()
{
     char a[1000][1000];
     int n,m;
     cin>>n>>m;
     int i,j;
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=m;j++)
          {
               cin>>a[i][j];
          }
     }
     char op[1000][1000];
     singlepath(a,op,1,1,n,m);
  //   cout<<"Total number of paths = "<<cntpath(a,i,j,n-1,m-1);
    // printallpaths(a,i,j,n-1,m-1);
}
