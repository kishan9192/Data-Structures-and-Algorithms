#include<bits/stdc++.h>
#include<vector>
#include<string.h>
using namespace std;
vector<string>  v;
void permute(string str, int i)
{
     if(i == str.length())
     {
          v.push_back(str);
          return;
     }
     for(int j = i; str[j] !='\0'; j++)
     {
          swap(str[i],str[j]);
          permute(str,i+1);
          //swap(str[i],str[j]);
     }
}
int main()
{
     string str;
     cin>>str;
     string s = str;
     permute(str,0);
   //  char op[1000];
 //    char op1[1000];
    // sort(v.begin(), v.end());
    //cout << s << endl;
     for(int i =0; i<v.size(); i++)
     {
         //
          if(v[i] < s)
          {
               cout<<v[i]<<endl;
          }
     }
     return 0;
}
