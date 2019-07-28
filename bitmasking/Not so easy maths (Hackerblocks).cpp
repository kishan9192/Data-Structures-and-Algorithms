#include<bits/stdc++.h>
using namespace std;
int main()
{
     int primes[3] = {2,3,5};
     int n = 1<<3;
     int i,j;
     int temp;
     int cnt_bits;
     int den = 1;
     int ans = 0;
     for(i=1;i<n;i++)
     {
          den = 1;
          temp = i;
          cnt_bits = __builtin_popcount(i);
          j=0;
          while(temp > 0)
          {
               if(temp&1)
               {
                    den *= primes[j];
                 //   cout<<"Denominator is"<<primes[j];
                    //cout<<"den = " <<den;
               }
               cout<<endl;
               j++;
               temp = temp>>1;
          }
         // cout << cnt_bits << endl;
          if(cnt_bits&1) // if count of set bits  is odd, this means we have selected just one number or 3 numbers from (2,3,5). can be either 2 or 3 or 5 or (2,3,5). Consider {a U b}
               {
                    ans += (100/den);
               }
               else
               {
                    ans -= (100/den);
               }
     }
     cout<<ans;
     return 0;
}
