#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i = 0; i<s.length() ;i++)
    {
        cout<<s[i];
        if(!(s[i+1] == '\0'))
        {
               cout<<(s[i+1] - s[i]);
        }
    }
	return 0;
}
