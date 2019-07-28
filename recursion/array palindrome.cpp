#include<iostream>
using namespace std;
bool isPalindrome(int a[], int n, int i)
{
    static int sum = 0;
    if((i) == (n-i-1))
    {
        return 1;
    }
    if(a[i]==a[n-i-1])
    {
        isPalindrome(a,n,i+1);
        return true;
    }
    else
    {return false;}
}

int main() {
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(isPalindrome(a,n,0))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
	return 0;
}
