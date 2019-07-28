#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	 cin>>t;
	 while(t--)
	 {
		  int maxend =0;
		  int maxfar = 0;
		  int n;
		 cin>>n;
		 long long int a[n];
		  int i;
		 for(i=0;i<n;i++)
		 {
		      cin>>a[i];
		    //  cout<<"Element is "<<a[i];
			 maxend += a[i];
			 if(maxend < 0)
			 {
				 maxend = 0;
			 }
			 if(maxend > maxfar)
			 {
				 maxfar = maxend;
			 }
		 }
		 cout<<maxfar<<endl;
	 }
	return 0;
}
