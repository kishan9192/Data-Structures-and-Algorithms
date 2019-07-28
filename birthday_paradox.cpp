#include<bits/stdc++.h>
using namespace std;
int main()
{
     float p;
     p=.6;
     int num = 365;
     int den = 365;
     float ans = 1;
     int cnt =0;
     while((1-p)<ans)
     {
          ans = (ans*num)/den;
          cnt++;
          num--;
     }
     cout<<"Number of people = " <<cnt;
     return 0;
}
