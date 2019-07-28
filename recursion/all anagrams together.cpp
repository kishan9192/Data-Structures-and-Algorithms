#include<bits/stdc++.h>
using namespace std;
int permutations(string str, int i)
{
       static int ans = 0;
     if(str[i] == '\0')
     {
          ans++;
          return 0;
     }

     for(int j = i; str[j] != '\0'; j++)
     {
          swap(str[i],str[j]);
          permutations(str,i+1);
          swap(str[i],str[j]);
     }
     return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        int m = v.size();
        vector<int>v2;
        for(int i=0; i<m;)
        {
            int k =permutations(v[i],0);
            v2.push_back(k);
            i = i+k;
        }
        sort(v2.begin(), v2.end());
        for(auto x : v2)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        v.clear();
        v2.clear();

    }
}
