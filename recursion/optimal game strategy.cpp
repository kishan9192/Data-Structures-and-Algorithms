#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int sum = 0;
    for(i=1;i<=n;i++)
    {
        if(i%2 == 0)
        {
            sum += a[i];
        }
    }
    cout<<sum;
}
