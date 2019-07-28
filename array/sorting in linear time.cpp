#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int z = 0, one = 0, two = 0;
    for(i=0; i<n;i++)
    {
        if(a[i]==0)
        {
            z++;
        }
        else if(a[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    i=0;
    while(z--)
    {
        a[i] = 0;
        i++;
    }

    while(one--)
    {
        a[i] = 1;
        i++;
    }
    //cout<<"After 1 i = "<<i<<endl;

    while(two--)
    {
        a[i] = 2;
        i++;
    }
   // cout<<"After 2 " <<i<<endl;
    for(i=0;i<n;i++)
    {
      cout<<a[i]<<endl;
    }
	return 0;
}
