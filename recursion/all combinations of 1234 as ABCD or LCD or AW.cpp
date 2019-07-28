/* Given an input string of numbers
you have to make all possible combinations of that string in the form of characters.
Example : input string = 1234
output can be ABCD, if we take 123 and 4
output can be LCD if we take 12(twelve), 3 and 4 as L is 12th character in A to Z
output can be AWD if we take 1, 23, and 4.
Note: The combination of two digits should not exceed 26 as there are only 26 alphabets.
*/
#include<bits/stdc++.h>
using namespace std;
void generatestring(char s[], char op[], int i, int j)
{
     if(s[i] == '\0')
     {
          op[j] = '\0';
          cout<<op<<endl; /*printing the whole output string */
          return;
     }
     int digit = s[i] - '0';
     char ch = digit + 'A' - 1;
     op[j] = ch;
     generatestring(s,op,i+1,j+1);

     /*For the combination of two alphabets */
     if(s[i+1] != '\0')
     {
          int seconddigit = s[i+1] - '0';
          int no = digit*10 + seconddigit;
          if(no <= 26)
          {
               ch = no + 'A' - 1;
               op[j] = ch;
               generatestring(s,op,i+2,j+1);
          }
     }
   //  return;
}
int main()
{
     int n;
     cout<<"Enter the size of input string " ;
     cin>>n;
     cout<<"\nEnter the string of numbers" ;
     char s[n];
     cin>>s;
     char op[n];
     cout<<"\nThe output string can have combinations as ";
     generatestring(s,op,0,0); /* 0,0 are i and j passed as parameters */
     return 0;
}
