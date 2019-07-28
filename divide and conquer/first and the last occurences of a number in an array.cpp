#include<bits/stdc++.h>
using namespace std;
int firstoccurence(int a[], int s, int e, int element)
{
    int pos = -1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid] == element)
        {
            pos = mid;
            e = mid-1;
        }
        else if(a[mid] > element)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return pos;
}
int lastoccurence(int a[], int s, int e, int element)
{
    int pos = -1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid] == element)
        {
            pos= mid;
            s = mid+1;
        }
        else if(a[mid] > element)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return pos;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int t;
    cin>>t;
    while(t--)
    {
        int e;
        cin>>e;
        cout<<firstoccurence(a,0,n-1,e)<<" ";
        cout<<lastoccurence(a,0,n-1,e)<<endl;
    }
	return 0;
}
