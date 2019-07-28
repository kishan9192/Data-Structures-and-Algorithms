#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
     vector <int> v;
     int i;
     int n;
     cout<<"Enter number of elements";
     cin>>n;
     int num;
     cout<<endl;
     for(i=0;i<n;i++)
     {
          cin>>num;
          v.push_back(num);
     }
     for(i=0;i<n;i++)
     {
          cout<<v[i]<<"    ";
     }
     cout<<"\nSize of the vector is " <<v.size();
     cout<<"\nCapacity of the vector is " <<v.capacity();
      cout<<"\n Vector after sorting in ascending order";
      sort(v.begin(), v.end());
        for(i=0;i<n;i++)
     {
          cout<<v[i]<<"    ";
     }
     cout<<"\nVector after sorting in descending order";
     sort(v.begin(), v.end(), greater<int>());
       for(i=0;i<n;i++)
     {
          cout<<v[i]<<"    ";
     }
if(find(v.begin(), v.end(), 7) != v.end())
{
     cout<<"\nElement Found";
}
     return 0;
}
