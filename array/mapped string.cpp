#include<bits/stdc++.h>
using namespace std;
void fun(char s[], char op[], int i, int j)
{
     static int l = strlen(s);
    if(s[i] == '\0')
    {
        op[j] = '\0';
        cout<<op<<endl;
        return;
    }
    int digit = s[i] - '0';
    char ch = digit + 'A' - 1;
    op[j] = ch;
    fun(s,op,i+1,j+1);

    if(s[i+1]!='\0')
    {
        int seconddigit = s[i+1] - '0';
        int no = digit*10 + seconddigit;
        if(no<=26)
        {
            ch = no + 'A' - 1;
            op[j] = ch;
              fun(s,op,i+2,j+1);
        }

    }
    return;

}

int main()
{
    char s[1000];
    cin>>s;
    char op[1000];
    fun(s,op,0,0);
    return 0;
}
