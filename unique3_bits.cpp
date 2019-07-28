#include<iostream>
using namespace std;
int main() {
    int n;
    int i;
    cin>>n;
    int a[n];
    for(i = 0; i < n; i++)
    {cin>>a[i];}
    int freq[64] = {0};
    int p ;
    for(int i=0; i<n; i++)
    {
        int temp = a[i];
        int lastbit;
        p=0;
        while(temp > 0)
        {
            lastbit = temp&1;
             if(lastbit == 1)
            {
                freq[p]++;
            }
                p++;
                temp = temp>>1;
        }
    }
    /*frequency array */
    for(i=0;i<64;i++)
    {
         cout<<freq[i]<<"  ";
    }
        int ans = 0;
        int tp = 1;
        for(i = 0; i < 64; i++)
        {
            freq[i] = (freq[i]%3);
            ans = (freq[i]*tp) + ans;
            tp = tp<<1;
        }
        cout<< endl<<ans;
	return 0;
}
