// C++ program to print sums of all possible
// subsets.
#include<bits/stdc++.h>
using namespace std;

// Prints sums of all subsets of arr[l..r]
void subsetSums(vector<int>&arr, int l, int r,int sum, vector<int> &v)
{
	// Print current subset
	if (l > r)
	{
        v.push_back(sum);
        		return;
	}

	// Subset including arr[l]
	subsetSums(arr, l+1, r, sum+(arr.at(l)),v);

	// Subset excluding arr[l]
	subsetSums(arr, l+1, r, sum,v);
}

// Driver code
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int e;
        cin>>e;
        a.push_back(e);
    }
    vector<int> v ;
    int flag = 0;
	subsetSums(a, 0, n-1,0,v);
    int s = v.size();
    for(int i = 0; i<s-1; i++)
    {
        if(v[i] == 0)
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    cout<<endl;
    a.clear();
    v.clear();
    }
	return 0;
}
