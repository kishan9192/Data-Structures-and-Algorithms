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
node* buildtree(string s)
{
	if(s == "true")
	{
		int data;
		cin>>data;
		node * root = new node(data);
		string l,r;
		cin>>l;
		if(l == "true")
		{
			root->left = buildtree(l);
		}
		cin>>r;
		if(r == "true")
		{
			root->right = buildtree(r);
		}
		return root;
	}
	return NULL;
}
bool isIdentical(node *root1, node *root2)
{
if(root1==NULL && root2==NULL)
{
return true;
}
else
if(root1==NULL || root2==NULL)
{
return false;
}
else
{
return (isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right));
}
}
int main()
{
	node * root1 = buildtree("true");
	node * root2 = buildtree("true");
    if(isIdentical(root1,root2))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
