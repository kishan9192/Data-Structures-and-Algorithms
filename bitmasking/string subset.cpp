#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
     string str;
     cout << "Enter a string ";
     cin>>str;
     int n = str.length();
     int i;
     int j;
     int lastbit,temp;
     for(i=0; i<((1<<n)); i++)
     {
          temp = i;
          j = 0;
               cout << " { ";
               while(temp>0)
               {
                    lastbit = temp&1;
                    if(lastbit)
                    {
                         cout<<str[j]<<"  ";
                    }

               j++;
               temp = temp>>1;
               }

               cout<<"  } "<<endl;
     }
 return 0;
}
