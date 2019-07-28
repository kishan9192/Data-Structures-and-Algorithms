#include<bits/stdc++.h>
using namespace std;
void spell(int n)
{
     if(n==0)
     {
          return;
     }
     spell(n/10);
     if((n%10) == 2)
     {
          cout<<"two ";
     }
        if((n%10) == 0)
     {
          cout<<"zero ";
     }
        if((n%10) == 4)
     {
          cout<<"four ";
     }
        if((n%10) == 8)
     {
          cout<<"eight ";
     }

}

int main()
{
     int n;
     cout<<"Answer is ";
     spell(cin>>n);
}
