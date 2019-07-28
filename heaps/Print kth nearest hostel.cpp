#include<bits/stdc++.h>
using namespace std;
#define lli long long int       //Use long long int as distance will exceed the range of int
lli dist(lli x, lli y)
{
	lli d = x*x + y*y;
	return d;
}
int main() {
	lli q,k,qt;
	cin>>q>>k;
	priority_queue<lli> h;
	lli cnt = 0;
	/*while(cnt<k)
	{h.push(0);
	cnt++;}*/
	while(q--)
	{
		cin>>qt;
		lli x,y;
        lli d;
		if(qt == 1)
		{
			cin>>x>>y;
			d = dist(x,y);
            if(h.size() < k){
                //If size of heap is less than k , simply push
                h.push(d);
            }
            else if(d < h.top()){
                //Else compare whether the new element is smaller than heap's top element
                //If yes , then pop heap's top element and then push the new one
                h.pop();
                h.push(d);
            }
            /*
            if(h.size()>k)
            {
                h.pop();
            }
            h.push(d);
            */
		}
		 if(qt == 2)
		{
			cout<<h.top()<<endl;
		}
	}
	return 0;
}
