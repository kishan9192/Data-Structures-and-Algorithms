#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
class fruits{
public:
     string name;
     int price;
     fruit(string n, int p)
     {
          name = n;
          price = p;
     }

};
class compare{
public:
     bool result(compare a, compare b)
     {
          return a.second<b.second;
     }
};
priority_queue<fruits, vector<fruits>,compare>h;
