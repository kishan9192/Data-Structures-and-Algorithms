#include<bits/stdc++.h>
//#include<vector>
//#include<queue>
using namespace std;

typedef pair< int, pair<int,int> >ppi; ///Pair of pairs. first is element, second is index of array, third is index in array
vector<int> mergeKarrays(vector<vector<int> > a)
{
     vector<int> output;
     priority_queue<ppi, vector<ppi>, greater<ppi> >pq;
     int n = a.size();
     for(int i=0; i < n; i++)
     {
          pq.push({a[i][0], {i,0}}); ///Pushing first element of each array
     }
     while(!pq.empty())
     {
          ppi curr = pq.top();
          pq.pop();
          int i = curr.second.first;
          int j = curr.second.second;
          output.push_back(curr.first);
          int m = a[i].size();
          if(j+1<m)
          {
               pq.push({a[i][j+1], {i,j+1}});
          }
     }
     return output;
}
int main()
{
     int e;
     int k,n;
     cin>>k>>n;
    vector<vector<int> > vec;
    for(int i=0;i<k;i++)
    {
         vector<int>v;
         for(int j = 0;j<n;j++)
         {     cin>>e;
              v.push_back(e);
         }
         vec.push_back(v);
    }
     vector<int>output = mergeKarrays(vec);
     for(auto x: output)
     {
          cout<<x<<" ";
     }
     return 0;
}
