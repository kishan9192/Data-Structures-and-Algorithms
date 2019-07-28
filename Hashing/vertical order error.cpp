#include<bits/stdc++.h>
#include<cmath>
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
node* levelOrder(int n)
{
    queue<node*> q;
    int d;
    if(n>0)
    {
    
    cin>>d;
    n--;
    }
    
    node* root = new node(d);
    q.push(root);
    
    while(!q.empty())
    {
        int c1,c2;
        if(n>0)
        {
            cin>>c1;
            n--;
        }
        
        if(n>0)
        {
            cin>>c2;
            n--;
        }
        
        node* f = q.front();
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

void preorder(node* root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        cout<<root->data<<" ";
        preorder(root->right);
    }
}
/*void getverticalorder(node* root, map<int, vector<int> >&m, int d)
{
    if(root != NULL)
    {
        m[d].push_back(root->data);
        getverticalorder(root->left, m, d-1);
        getverticalorder(root->right, m, d+1);
    }
}
void printverticalorder(node* root)
{
    map<int, vector<int> > m;
    getverticalorder(root,m,0);
  //  map< int,vector<int> > :: iterator it;   
    map<int , vector<int> >::iterator it;
  //  for (it=m.begin(); it!=m.end(); it++) 
    for(it = m.begin(); it != m.end(); it++)
    {
        for(int i = 0; i < (it->second.size()) ; i++)
        {
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }
}*/
int main()
{
    int k;
    cin>>k;
    int n = (1<<k) -1;
    node* root = NULL;
    root = levelOrder(n);
    preorder(root);
    //printverticalorder(root);
}