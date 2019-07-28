#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
     static int sum = 0;
     if(n == 0)
     {
          return 0;
     }
     else
     {
               sum = sum*10 + n%10;
               isPalindrome(n/10);
     }
     if(sum == n)
     {
          return true;
     }
     return false;
}
void printdigits(int n)
{
     if(n==0)
     {
          return;
     }
     printdigits(n/10);
     cout<<(n%10)<<"  ";
}
int sum(int n)
{
     if(n==0)
     {
          return 0;
     }
     else
     {
          return (n%10 + sum(n/10));
     }
}
int no(int n)
{
     if(n==0)
     {
          return 0;
     }
     else
     {
          return 1+no(n/10);
     }
}
int main()
{
     int n;
     cin>>n;
     cout<<"Number of digits = "<<no(n);
     cout<<endl;
     cout<<"Sum of digits = "<<sum(n);
     cout<<endl;
     cout<<"Digits are : ";
     printdigits(n);
     cout<<endl;
     if(isPalindrome(n))
     {
          cout<<"Number is palindrome";
     }
     else
     {
          cout<<"Number is not a Palindrome";
     }
}
