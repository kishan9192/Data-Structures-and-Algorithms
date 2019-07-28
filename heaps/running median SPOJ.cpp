#include<bits/stdc++.h>
using namespace std;
void runningmedian(double a[], int n)
{
     priority_queue<double > s;
     priority_queue<double, vector<double>, greater<double> > g;
     int i;
     double med;
     if(a[0]== -1)
     {
          med = 0;
     }
     else
     {
          med = a[0];
          s.push(a[0]);
     }
    // cout<<med<<endl;
     for( i =1; i<n; i++)
     {
         if(a[i]== -1) /// Whenever a[i] is -1, we need to print the median. -1 in array is denoting queries
          {
               cout<<med<<endl;
          }
          else
          {
               if(s.size()>g.size())
               {
                    if(a[i]<med)
                    {
                         g.push(s.top());
                         s.pop();
                         s.push(a[i]);
                    }
                    else
                    {
                         g.push(a[i]);
                    }
                    med = (s.top()+g.top())/2;
               }
               else if(s.size() == g.size())
               {
                    if(a[i]<med)
                    {
                         s.push(a[i]);
                         med = s.top();
                    }
                    else
                    {
                         g.push(a[i]);
                         med = g.top();
                    }
               }
               else
               {
                    if(a[i]<med)
                    {
                         s.push(a[i]);
                    }
                    else
                    {
                         s.push(g.top());
                         g.pop();
                         g.push(a[i]);
                    }
                    med = (g.top()+s.top())/2;
               }
          }
         // cout<<med<<endl;
     }
}
int main()
{
  int n;
  cin>>n;
  double a[n];
  int i;
  for(i=0;i<n;i++)
  {
       cin>>a[i];
  }
  runningmedian(a,n);
  return 0;
}
