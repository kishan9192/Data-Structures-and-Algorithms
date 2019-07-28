#include<bits/stdc++.h>
using namespace std;
bool issafe(int a[][20], int i, int j, int n)
{
     int x = i;
     int y = j;
     for(x=0;x<i;x++)
     {
          if(a[x][y] == 1)
          {
               return false;
          }
     }
     x=i;
     y=j;
     //Left diagonal
    while(x>=0 && y>=0)
    {
               if(a[x][y] == 1)
               {
                    return false;
               }
               x--;
               y--;
     }
     // Right Diagonal
     x=i;
     y=j;
     while(x>=0 && y<n)
          {
               if(a[x][y] == 1)
               {
                    return false;
               }
               x--;
               y++;
          }
     return true;
}
int  countnqueen(int a[20][20], int i, int n)
{
    static int ans = 0;
     if(i==n)
     {
          ans++;
          return 0;
     }

     for(int j = 0; j<n; j++)
     {
          if(issafe(a,i,j,n))
          {
               a[i][j] = 1;
                countnqueen(a,i+1,n);
          }
          a[i][j] = 0;
     }
     return ans;
}
void nqueen(int a[20][20], int i, int n)
{
     static int c = 0;
     if(i==n)
     {
          c++;
          for(int k = 0; k<n; k++)
          {
               for(int l = 0;l<n; l++)
               {
                    cout<<a[k][l]<<" ";
               }
               cout<<endl;
          }
          cout<<endl;
          return;
     }
     for(int j = 0; j<n; j++)
     {
          if(issafe(a,i,j,n))
          {
               a[i][j] = 1;
               nqueen(a,i+1,n);
          }
          a[i][j] = 0;
     }
}
int main()
{
     int n;
     cin>>n;
     int a[20][20] = {0};
     nqueen(a,0,n);
     cout<<"Number of solutions = "<<countnqueen(a,0,n);

}
