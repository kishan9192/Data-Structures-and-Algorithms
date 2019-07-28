#include<iostream>
#include<bitset>
using namespace std;
bitset<22>col,diag1,diag2;
void countnkings(int r, int n, int &ans)
{
     if(r == n)
     {
          ans++;
          return;
     }
     for(int c = 0; c<n; c++)
     {
          if(! col[c] && !diag1[r-c+n-1]  && !diag2[r+c])
          {
               col[c] = diag1[r-c+n-1] = diag2[r+c] = 1;
               countnkings(r+1,n,ans);
               col[c] = diag1[r-c+n-1] = diag2[r+c] = 0;
          }
     }
}
int main()
{
     int n;
     cin>>n;
     int ans = 0;
     countnkings(0,n,ans);
     cout<<ans<<endl;
     return 0;
}
