#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
     map<int, int> m1;
     m1.insert(pair<int,int>(4,50));
     m1.insert(pair<int,int>(1,5));
     m1.insert(pair<int,int>(3,12));
     m1.insert(pair<int,int>(5,54));
     m1.insert(pair<int,int>(12,02));
     m1.insert(pair<int,int>(14,25));
     m1.insert(pair<int,int>(6,24));
     m1.insert(pair<int,int>(7,30));
     map<int, int>::iterator i;
     for(i=m1.begin(); i!=m1.end();i++)
     {
          cout<<"\t"<<i->first<<"\t"<<i->second;
          cout<<endl;
     }
     /* Assigning elements from map 1 to map 2*/
     map<int,int> m2;
m2.insert(pair<int, int>(135,486));
     m2.insert(m1.begin(), m1.end());
    cout<<"\nVector 2\n";
      for(i=m2.begin(); i!=m2.end();i++)
     {
          cout<<"\t"<<i->first<<"\t"<<i->second;
          cout<<endl;
     }
     return 0;
}
