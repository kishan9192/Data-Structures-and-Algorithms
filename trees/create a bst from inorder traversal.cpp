#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
node* buildtree(int a[], int s, int e)
{
    if(s>e)
    {return NULL;}

    int mid = (s+e)/2;
    node * root = new node(a[mid]);
    root->left = buildtree(a,s,mid-1);
    root->right = buildtree(a,mid+1,e);
    return root;
}
void printpreorder(node * root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        printpreorder(root->left);
        printpreorder(root->right);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        node * root = NULL;
        int n;
        cin>>n;
        int a[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
       root = buildtree(a,0,n-1);
        printpreorder(root);
        cout<<endl;
    }
	return 0;
}
