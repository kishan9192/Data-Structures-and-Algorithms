#include <bits/stdc++.h>
using namespace std;

// To find min number of flips in binary string
int findFlips(char str[], int n)
{
    char last = ' '; int res = 0;

    for (int i = 0; i < n; i++) {

        // If last character is not equal
        // to str[i] increase res
        if (last != str[i])
            res++;
        last = str[i];
    }

    // To return min flips
    return res / 2;
}

// Driver program to check findFlips()
int main()
{
    char str[1000] ;
    cin>>str;
    int n = strlen(str);

    cout << findFlips(str, n);

    return 0;
}
