#include<iostream>
#include<set>
#include<algorithm>
#include<string.h>
using namespace std;

char map[26] = { 'A' , 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
set<string> ans;

void mappedStrings(string input, int i, string output) {
    if(input.length() == i) {
        ans.insert(output);
        return;
    } else {
        string temp1, temp2;
        temp1 = temp2 = output;
        int t1 = input[i] - '0';
        temp1 = temp1 + map[ t1 + 1 ];
        mappedStrings(input, i+1, temp1);
        int digit1 = input[i] - '0';
        int t2 =digit1*10 + (input[i+1] - '0');
        temp2 = temp2 + map[  t2 + 1 ];
        mappedStrings(input, i+2, temp2);
    }
}

int main() {

    string input;
    cin >> input;
    string output = "";
    mappedStrings(input, 0, output);

    for( set<string>::iterator itr= ans.begin(); itr!=ans.end();itr++) {
          cout << *itr << endl;
    ans.clear();
    return 0;
}
}
