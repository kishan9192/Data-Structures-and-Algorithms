#include<bits/stdc++.h>
using namespace std;
void stringcompression(char s[])
{
     int i;
    int l = strlen(s);
    int freq[100] = {0};
    for(i=0;i<l;i++)
    {
        freq[s[i]]++;
    }
    for(i = 0; i<l;i++)
    {
        cout<<s[i];
        cout<<freq[s[i]];
    }
}
int main()
{
    char str[100];
    cin>>str;
    stringcompression(str);
}
