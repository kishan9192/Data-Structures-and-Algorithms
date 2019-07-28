#include<bits/stdc++.h>

using namespace std;
void maxcount(char ch[])
{
    long long  int i;
    long long int cnt = 0;
    long long int freq[1000] = {0};
    for(i=0;i<strlen(ch);i++)
    {
        freq[ch[i]]++;
    }
    long long int max = 0;
    char result;
    for(i=0;i<strlen(ch);i++)
    {
        if(max < freq[ch[i]])
        {
            max = freq[ch[i]];
            result = ch[i];
        }
    }
    cout<<result<<" appears "<<max<<" number of times .";
}
int main() {
     char st[1000];
     cin>>st;
     maxcount(st);
	return 0;
}
