#include<bits/stdc++.h>
using namespace std;
void duplicate(string s, int i)
{   static int j = i;
    if(i==s.length())
    {
        return;
    }
    duplicate(s,j+1);
    if(s[j]==s[j+1])
    {
        cout<<s[j];
        cout<<"*";
    }
    i++;
        cout<<s[j];

}
int main() {
    string s;
    cin>>s;
    int i = 0;
    duplicate(s,i);
	return 0;
}
