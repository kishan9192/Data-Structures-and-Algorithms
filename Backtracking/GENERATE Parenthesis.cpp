#include<iostream>
#include<stack>

using namespace std;
stack<string> v;

void generate_paranthesis(int n,char output[],int i,int open,int close){
	if(i==2*n){
		output[i] ='\0';
		v.push(output);
		return;
	}
	//rec case
	if(open<n){
		output[i] = '(';
		generate_paranthesis(n,output,i+1,open+1,close);
	}
	if(close<open){
		output[i] = ')';
		generate_paranthesis(n,output,i+1,open,close+1);
	}
}

int main(){

	int n;
	cin>>n;
	char output[100];
	generate_paranthesis(n,output,0,0,0);
	   while(!(v.empty()))
    {
         cout<<v.top()<<endl;
         v.pop();
    }
    cout<<endl;

	return 0;
}
