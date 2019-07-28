#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        int i=l, j=mid+1;
        int k = l;
        int temp[(l+r)];
        while(i<=mid && j<=r)
        {
            if(a[i]<a[j])
            {
                temp[k++] = a[i++];
            }
            else
            {
                temp[k++] = a[j++];
            }
        }
        while(i<=mid)
        {
            temp[k++] = a[i++];
        }
        while(j<=r)
        {
            temp[k++] = a[j++];
        }
        for(i=l;i<=r;i++)
        {
            a[i] = temp[i];
        }
    }
}
void mergesort(int a[], int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,r);
    }
}

int main()
{
    int i;
    int n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"   ";
    }
}
