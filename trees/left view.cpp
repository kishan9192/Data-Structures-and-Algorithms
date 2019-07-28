#include<bits/stdc++.h>
#include<queue>
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
node* levelorder()
{
    int d;
    cin>>d;
    node* root = new node(d);
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        int c1,c2;
        cin>>c1>>c2;
        node* f= q.front();
        q.pop();
        if(c1 != -1)
        {
            f->left = new node(c1);
            q.push(f->left);
        }
        if(c2 != -1)
        {
            f->right = new node(c2);
            q.push(f->right);
        }
    }
    return root;
}
int height(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    int ans = max(l,r)+1;
    return ans;
}
void leftview(node* root, int k,  int &flag)
{
    
    if(root == NULL)
    {
        return;
    }
    if(k == 0 && (flag) == 0)
    {
        cout<<root->data<<" ";
        flag = 1;
        return;
    }
    else
    {
    leftview(root->left, k-1,flag);
    leftview(root->right, k-1,flag);  
    }
}
int main()
{
    node* root = NULL;
    root = levelorder();
    int levels = height(root);
    for(int k = 0; k<=levels; k++)
    {
        int flag = 0;
        leftview(root,k,flag);
    }
}