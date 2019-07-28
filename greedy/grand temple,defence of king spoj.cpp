#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>x;
    vector<int>y;
    int xc,yc;
    for(int i=0;i<n;i++)
    {
        cin>>xc>>yc;
        x.push_back(xc);
        y.push_back(yc);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int dx,dy;
    dx = x.front();
    dy = y.front();
    for(int i=0;i<n;i++)
    {
        dx = max(dx, x[i+1]-x[i]);
        dy = max(dy, y[i+1] - y[i]);
    }
    //cout<<"dx"<<dx<<endl;
    //cout<<"dy"<<dy<<endl;
    //cout<<"X length"<<x.size()<<endl;
    //cout<<"Y length"<<y.size()<<endl;
    //cout<<"Y end"<<y.back()<<endl;
    //cout<<"X end"<<x.back()<<endl;
    int xs = x.size();
    int xend = x.back();
    int xy = y.size();
    int yend = y.back();
     dx = max(dx, xs-xend);
     dy = max(dy, xy-yend);
    cout<<(dx-1)*(dy-1);
	return 0;
}