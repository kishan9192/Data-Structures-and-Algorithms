#include<bits/stdc++.h>
using namespace std;
void ls(int a[], int n, int e)
{
    static int i = 0;
    if(i==n)
    {
        return;
    }
    if(a[i]==e)
    {
        cout<<i<<" ";
    }
    i++;
    ls(a,n,e);
    return;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int e;
    cin>>e;
    ls(a,n,e);
    return 0;
}
