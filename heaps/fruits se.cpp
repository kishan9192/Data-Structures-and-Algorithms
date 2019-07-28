#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
class fruits{
public:
     string name;
     int price;
     fruits(){

	}
     fruits(string n, int p)
     {
          name = n;
          price = p;
     }
     void print()
     {
          cout<<name<<" "<<price<<endl;
     }
};

class fruitcompare{
public:
     bool operator()(fruits a, fruits b)
     {
          return a.price > b.price;
     }
};

int main()
{

     priority_queue<fruits, vector<fruits> ,fruitcompare> pq;
     cout<<"Enter fruit and it's price " <<endl;
     string n;
     int p,i;
     for(i=0;i<4;i++)
     {
          cin>>n>>p;
          fruits f(n,p);
          pq.push(f);
     }
     while(!pq.empty())
     {
          fruits f1 = pq.top();
          f1.print();
          pq.pop();
     }
     return 0;
}
