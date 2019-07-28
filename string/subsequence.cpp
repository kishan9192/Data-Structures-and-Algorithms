#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<string> v;
/*int countsubsequence(char *s, char *op, int i, int j)
{
     static int cnt = 0;
    if(s[i] == '\0')
    {
        op[j] = s[i];
        cnt++;
        return cnt;
    }
    op[j] = s[i];
    countsubsequence(s, op, i+1, j+1);
    countsubsequence(s,op,i+1,j);
}
*/
void subsequences(char *s, char *op, int i, int j)
{
    static int cnt = 0;
    if(s[i] == '\0')
    {
        op[j] = s[i];
        v.push_back(op);
        return;
    }
    op[j] = s[i];
    subsequences(s, op, i+1, j+1);
    subsequences(s,op,i+1,j);

    //return;
}
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
    char str[1000];
    cin>>str;
    int l = strlen(str);
    int n = 1<<l;
    char op[n];
    subsequences(str,op,0,0);
    //cout<<endl;
   // cout<<countsubsequence(str,op,0,0);
    sort(v.begin(),v.end());
    int i;
    for(i=0;i<v.size();i++)
    {
         cout<<v[i]<<endl;
    }
     }

}
