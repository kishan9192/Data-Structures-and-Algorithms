#include<bits/stdc++.h>
using namespace std;
void movex(char s[], int i, int m)
{
     static int l = strlen(s);
     static int cnt = m;
   //  cout<<"Count is " <<cnt;
     if(s[i] == '\0' )
     {
//               s[i] = '\0';
               cout<<s;
               return;
     }
     while(s[i] == 'x')
     {
              if((i+cnt) >= l)
               {
                    break;
               }
          for(int j = i; s[j+1] !='\0' ; j++)
          {
               swap(s[j],s[j+1]);

          }

     }

   /*  if(s[i] == 'x')
     {
          movex(s,i);
     }*/
   movex(s,i+1,m);
}
int main()
{
     char s[1000];
     cin>>s;
     int cnt = 0;
     for(int i = 0; i<strlen(s); i++)
     {
          if(s[i] == 'x')
          {
               cnt++;
          }
     }
     movex(s,0,cnt);
}
