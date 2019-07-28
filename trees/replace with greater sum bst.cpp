
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left, *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
node* arrayToBST(int arr[],int s,int e){
	if(s>e){
		return NULL;
	}
	int mid = (s+e)/2;
	node*root = new  node(arr[mid]);
	root->left = arrayToBST(arr,s,mid-1);
	root->right = arrayToBST(arr,mid+1,e);
	return root;
}

void replace(node* root, int *sum)
{

   //static int sum = 0;
    if(root == NULL)
    {
        return;
    }
    replace(root->right,sum);
    *sum += root->data;
    root->data = *sum;
    replace(root->left,sum);
}
void inorder(node*root)
{
    if(root!=NULL)
    {
                cout<<root->data<<" ";

        inorder(root->left);
        inorder(root->right);
    }
}

int main()
{
    node* root = NULL;
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    root = arrayToBST(a,0,n-1);

    int sum = 0;
    replace(root,&sum);
    inorder(root);
}
