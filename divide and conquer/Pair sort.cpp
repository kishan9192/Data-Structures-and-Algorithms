#include<bits/stdc++.h>
using namespace std;
bool compare(pair<string, long long int >a, pair<string,long long int> b)
{
     if(a.second == b.second)
     {
          return a.first <b.first;
     }
     return a.second >b.second;
}
int main()
{
     long long int mins;
     cin>>mins;
     long long int n;
     cin>>n;
     pair<string, long long int> emp[10005];
    long long  int i;
     string name;
   long long  int salary;
     for(i=0;i<n;i++)
     {
          cin>>name;
          cin>>salary;
          emp[i].first = name;
          emp[i].second = salary;
     }
     sort(emp,emp+n,compare);
     for(i=0;i<n;i++)
     {
          if(emp[i].second > mins)
          {
               cout<<emp[i].first<<" "<<emp[i].second<<endl;
          }
     }
     return 0;
}
