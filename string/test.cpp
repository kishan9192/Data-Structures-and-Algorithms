#include<bits/stdc++.h>
using namespace std;
int fun(unsigned int n)
{
    if (n == 0 || n == 1)
        return n;

    if (n%3 != 0)
        return 0;

    return fun(n/3);
}
int main()
{

}
