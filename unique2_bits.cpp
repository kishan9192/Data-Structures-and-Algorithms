#include<bits/stdc++.h>
using namespace std;
int lastSetbit(int);
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    int ans2=0,ans1=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
        ans ^= a[i];
    }
    int k = 0;
    int setA[n], setB[n];
    int position1 = lastSetbit(ans); // returns the position of the first bit which is set while traversing the 'ans' from right <-----
    for(i = 0; i < n; i++)
    {
        if(position1 == lastSetbit(a[i]))
        {
            //setA[k] = a[i];
            //k++;
            ans1 ^= a[i];
        }
        else
        {
            //setB[k] = a[i];
            //k++;
            ans2 ^= a[i];
        }
    }
 /*   for(i=0;i<n;i++)
    {
        ans1 ^= setA[i];
        ans2 ^= setB[i];
    }

    */
    cout<<ans1<<" and "<<ans2;
    return 0;

}
// This function will return the position of the first set bit that is encountered when we traverse the element from right
int lastSetbit(int n)
{
    int temp = n;
    int pos=0;
    int lastbit ;
    while(temp > 0)
    {
         lastbit = temp&1;
        if(lastbit == 1)
        {
            break;
        }
        pos++;
        temp = temp >> 1;
    }
    return pos;
}
