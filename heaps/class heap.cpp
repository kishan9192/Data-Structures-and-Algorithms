#include<iostream>
#include<vector>
using namespace std;
class heaps{
     vector<int> v;
     bool mht;
     bool compare(int a, int b)
     {
          if(mht)
          {
               return a<b;
          }
          else
          {
               return a>b;
          }
     }
     void heapify(int index)
     {
          int mindex = index;
          int left = 2*index;
          int last = v.size();
          int right = 2*index + 1;
          while(left<last && compare(v[left],v[index]))
          {
               mindex = left;
          }
          while(right<last && compare(v[right], v[mindex]))
          {
               mindex = right;
          }
          if(mindex != index)
          {
               swap(v[mindex], v[index]);
               heapify(mindex);
          }
     }
public:
     heaps(bool type)
     {
          mht = type;
          v.push_back(-1);
     }
     void push(int data)
     {
     v.push_back(data);
     int index = v.size()-1;
     int parent = index/2;
     while(index > 1 && compare(v[index],v[parent]))
     {
          swap(v[index], v[parent]);
          index = parent;
          parent = parent/2;
     }
     }
     int top()
     {
          return v[1];
     }
  bool empty()
     {
          return v.size()==1;
     }
     void pop()
     {
             int last = v.size()-1;
          swap(v[1],v[last]);
          v.pop_back();
          heapify(1);
     }

};

int main()
{
     heaps h(false); /// in order to get min heap pass "true" in the function call as "heaps h(true);"
     h.push(4);
     h.push(5);
     h.push(1);
     h.push(53);
     h.push(55);
     h.push(67);
     cout<<h.top()<<" is the smallest element"<<endl;
     while(!h.empty())
     {
               cout<<h.top()<<endl;
               h.pop();
     }

}
