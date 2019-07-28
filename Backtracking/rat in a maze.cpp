#include<bits/stdc++.h>
using namespace std;
void ratinamaze(char a[][1000], char output[][1000],int i, int j, int n, int m)
{
     // cout<<"Called";
     static int flag =1;
    if(i==n && j== m && flag ==1)
    {
         a[i][j] = '1';
         // cout<<"ghusa";
        for(int k= 0; k<=n;k++)
        {
            for(int l = 0; l<=m; l++)
            {
                if(a[k][l] == '1')
                {
                     output[k][l] = '1';
                }
                else
                {
                     output[k][l] = '0';
                }

            }
        }
        for(int k = 0; k<=n ; k++)
        {
             for(int l = 0; l<=m; l++)
             {

                  cout<<output[k][l]<<" ";
             }
             cout<<endl;
        }
        flag --;
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

    ratinamaze(a,output,i,j+1,n,m);
    ratinamaze(a,output,i+1,j,n,m);
    a[i][j] = '0';
    return;


}
int main()
{
    int n,m;
    cin>>n>>m;
    int i,j;
    char op[1000][1000] = {'0'};
    char a[1000][1000];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    //cout<<endl;
   // cout<<"Input is ";
    //cout<<endl;
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
    }*/

    ratinamaze(a,op,0,0,n-1,m-1);
}
