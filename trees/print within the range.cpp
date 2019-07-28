#include<bits/stdc++.h>
#include<vector>
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

node* array2bst(node *root, int d)
{

    if(root == NULL)
    {
        node * n = new node(d);
       return n;
    }
    if(d >= root->data)
    {
        root->right = array2bst(root->right, d);
    }
    else
    {
        root->left = array2bst(root->left, d);
    }
   // root = array2bst(root, a, i++, n);
    return root;
}

void preorder(node * root)
{
    if(root!= NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);

        preorder(root->right);
    }
}
void nodeswithinrange(node * root, int k1, int k2, int n, vector <int> &v)
{

    if(root == NULL)
    {
        return;
    }


        nodeswithinrange(root->left,k1,k2,n,v);
        v.push_back(root->data);
        nodeswithinrange(root->right, k1, k2, n,v);


}
int main()
{
    int t;
    cin>>t;
    vector<int> v;
    while(t>0)
    {
        node * root = NULL;
        int n;
        cin>>n;
        int e;
        for(int i=0;i<n;i++)
        {
            cin>>e;
            root = array2bst(root,e);
        }
        int k1,k2;
        cin>>k1>>k2;
        cout<<"# Preorder : ";

        preorder(root);
        cout<<"\n";
        cout<<"# Nodes within range are : ";
        nodeswithinrange(root,k1,k2,n,v);
        for(int j=0;j<v.size();j++)
        {
             if(v.at(j)>=k1 && v.at(j)<=k2)
            {
                cout<<v[j]<<" ";
            }
        }
        v.clear();
        cout<<endl;
        t--;
    }
    return 0;
}
