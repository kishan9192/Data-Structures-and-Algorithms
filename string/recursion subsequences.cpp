#include<bits/stdc++.h>
#include<stack>
using namespace std;
stack<string>v;
int countsubsequence(char *s, char *op, int i, int j)
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
void subsequences(char *s, char *op, int i, int j)
{
    static int cnt = 0;
    if(s[i] == '\0')
    {
        op[j] = s[i];
        cnt++;
        //cout<<cnt;
        v.push(op);
        return;
    }
    op[j] = s[i];
    subsequences(s, op, i+1, j+1);
    subsequences(s,op,i+1,j);

    //return;
}
int main()
{
    char str[1000];
    cin>>str;
    int l = strlen(str);
    int n = 1<<l;
    char op[n];

    subsequences(str,op,0,0);
    while(!(v.empty()))
    {
         cout<<v.top()<<" ";
         v.pop();
    }
    cout<<endl;
    cout<<countsubsequence(str,op,0,0);

}
