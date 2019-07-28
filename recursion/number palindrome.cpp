#include<iostream>
using namespace std;
bool isPalindrome(int n)
{
     static int sum = 0;
     if(n!=0)
     {
          sum = sum*10 + n%10;
          isPalindrome(n/10);
     }
     if(sum == n)
     {
          return 1;
     }
     else
          return 0;
}
int main()
{
     int n;
     cin>>n;
     if(isPalindrome(n))
     {
          cout<<"Palindrome";
     }
     else
     {
          cout<<" Not Palindrome";
     }
     return 0;
}

