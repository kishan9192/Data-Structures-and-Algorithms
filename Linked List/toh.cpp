#include<iostream>
using namespace std;
void toh(int n, char source, char helper, char destination,int &counts)
{
    if(n==0)
    {
        return;
    }
    toh(n-1, source, destination, helper,counts);
    counts++;
    cout<<"Move"<<" " <<n<<"th"<<"Disk"<<" "<<"from"<<" "<<source<<" "<<"to"<<" "<<destination<<endl;
    toh(n-1,helper, source, destination,counts);

}


int main()
{
int counts=0;
    int n;
    cin>>n;
    toh(n, 'T1','T2','T3',counts);
    cout<<counts;
    return 0;
}
