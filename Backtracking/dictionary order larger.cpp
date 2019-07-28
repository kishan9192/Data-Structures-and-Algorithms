/*Take as input str, a string. Write a recursive function which prints all the words possible by rearranging the characters of this string which are in dictionary order larger than the given string*/


#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<string> v;
void permute(char str[], int i)
{
     if(str[i] == '\0')
     {
          v.push_back(str);
          return;
     }
     for(int j = i; str[j] != '\0'; j++)
     {
          swap(str[i],str[j]);
          permute(str,i+1);
          swap(str[i],str[j]);
     }
}
int main()
{
     char str[1000];
     cin>>str;
     char op[1000];
     strcpy(op,str);
     permute(str,0);
     sort(v.begin(),v.end());
     for(int i =0; i<v.size(); i++)
     {
          if(v[i] > op)
          {
               cout<<v[i]<<endl;
          }
     }
}
