
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool compare(string a,string b){
	if(a>b){
		return a.length()<b.length();
	}
}


int main(){
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string name;
		cin>>name;
		v.push_back(name);
	}

	sort(v.begin(),v.end(),compare);

	for(int i = 0; i<v.size(); i++){
		cout<<v[i]     <<" ";
	}

	return 0;
}
