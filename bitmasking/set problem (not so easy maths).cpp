#include<iostream>
using namespace std;
int main()
{
     int prime[3] = {2,3,5};
     int n = 1<<3;
     int i;
     int j;
     int den = 1;
     int ans = 0;
     int temp;
     for(i=1;i<n;i++)
     {
       j = 0;
       temp = i;
       den =1;
       int cntbits = __builtin_popcount(i);
       cout<<"{";
       while(temp>0)
       {
            if(temp&1)
            {
                 den *= prime[j];
                 cout<<prime[j]<<"\t";
            }
            j++;
            temp = temp>>1;
       }
       cout<<"}";
       cout<<endl;
         if(cntbits&1)
       {
            ans += (100/den);
       }
       else
       {
            ans -= (100/den);
       }
     }
     cout<<"\nPrinting answer  ";
     cout<<ans;
}

