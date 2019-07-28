#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
void query_print(priority_queue<int, vector<int>, greater<int> >pq)
{
     while(!pq.empty())
     {
          cout<<pq.top()<<" , ";
          pq.pop();
     }
     cout<<endl;
}
int main()
{
     priority_queue<int, vector<int>, greater<int> >pq;
     int n;
     int cnt = 0;
     int k =3;
     while(scanf("%d",&n)!=EOF)
     {
          if(n==-1)
          {
               query_print(pq);
          }
          else if(cnt<k)
          {
               pq.push(n);
               cnt++;
          }
          else{
               if(n>pq.top())
               {
                         pq.pop();
                    pq.push(n);
               }
          }
     }
}
