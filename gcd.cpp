#include<iostream>
using namespace std;
long long int gcd(long long int n1, long long int n2)
{
    if(n2 == 0)
    {
        return n1;
    }
    return gcd(n2, n1%n2);
}
long long int lcm(long long int n1, long long int n2)
(
        // a*b = lcm(a,b) * gcd(a,b);
       //Since gcd(a,0) = a.
       long long int m = n1*n2;
       return (m/gcd(n1,n2));
)
int main() {
    long long int n1;
    long long int n2;
    cin>>n1>>n2;
    cout<<lcm(n1,n2);
	return 0;
}
