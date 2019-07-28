#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
class car{
public:
     int x;
     int id;
     int y;
     car(int id, int x, int y)
     {
          this->id = id;
          this->x = x;
          this->y = y;
     }
     int dist()
     {
          return x*x + y*y;
     }
     void print()
     {
          cout<<"Model :"<<id<<" Location " <<x<<" , "<<y<<endl;
     }
};
class carcompare{
public:
     bool operator()(car a, car b)
     {
          return a.dist() > b.dist();
     }
};

int main()
{
     priority_queue<car, vector<car>, carcompare> pq;
     int x[] = {5,6,17,18,9,11,0,3};
     int y[] = {1,-2,8,9,10,91,1,2};
     for(int i=0;i<8;i++)
     {
          car c(i,x[i],y[i]);
          pq.push(c);
     }
     while(!pq.empty())
     {
          car p = pq.top();
          p.print();
          pq.pop();
     }

}
