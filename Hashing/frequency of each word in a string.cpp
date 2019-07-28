#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    string s = "Hello i am a robot i live in noida i am a student hello everyone";
    unordered_map<string,int> wordcount;
    stringstream ss(s);
    string word;
    while(ss >> word)
    {
        wordcount[word]++;
    }
    unordered_map<string, int>::iterator itr;
    for(itr = wordcount.begin(); itr != wordcount.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

}
