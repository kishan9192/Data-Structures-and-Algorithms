#include<bits/stdc++.h>
using namespace std;
void spell(int n)
{
     string a[10]={"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
     int i;
     if(n==0)
     {
          return;
     }
          spell(n/10);
          for(i=0;i<= 9;i++)
          int mod = n%10;
          {
               if(mod == i)
               {
                    cout<<a[i]<<"  ";
                    break;
               }
          }
}
int main()
{
     int n;
     cin>>n;
     cout<<"Answer is ";
     spell(n);
}
