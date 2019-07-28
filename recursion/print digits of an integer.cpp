#include<iostream>
using namespace std;
void cnt(int n)
{
     if(!(n > 0) ){
         return ;
        } else
     {


                cnt(n/10);

               cout<< n%10<<"\t";
     }

}
int main()
{
     int n;
     cin>>n;

      cnt(n);
     return 0;
}
