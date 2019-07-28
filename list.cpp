#include<bits/stdc++.h>
#include<list>
using namespace std;
int main()
{
     list <int > l1;
     l1.push_back(5);
     l1.push_back(51);
     l1.push_back(1);
     l1.push_back(26);
     l1.push_back(238);
     l1.push_back(22);
     l1.push_back(56);
     l1.push_front(155);
     l1.push_front(486);
     l1.push_back(89);
     l1.push_back(19);
     l1.push_back(116);
     l1.push_front(4);
     l1.push_front(15);
     l1.push_front(2);
     l1.push_front(21);
     l1.push_front(27);
     l1.push_front(24);
     list<int>::iterator i;
     for(i = l1.begin(); i != l1.end(); i++)
     {
          cout<<*i<<'\t';
     }
     return 0;
}
