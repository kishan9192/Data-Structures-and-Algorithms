#include<bits/stdc++.h>
using namespace std;
int powe(int n, int p)
{
    if(p == 0)
    {
        return 1;
    }
    else
    {
        return (n*powe(n, p-1));
    }
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<powe(n,p);
    return 0;
}
