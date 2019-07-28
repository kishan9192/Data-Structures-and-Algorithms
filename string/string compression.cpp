#include<bits/stdc++.h>
using namespace std;
void count(string s)
{
    int len = s.length();
    for (int i = 0; i < len; i++)
     {
        int ans = 1;
        while (i < len - 1 && s[i] == s[i + 1])
       {
            ans++;
             i++;
        }
        cout << s[i];
        if(ans!=1)
        {
             cout<<ans;
        }
    }
}

int main()
{
	string s;
	cin>>s;
	count(s);
}
