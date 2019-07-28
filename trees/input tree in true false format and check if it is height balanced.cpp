///Example input:10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false

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
          left = right = NULL;
     }
};
node* buildtree(string s)
{
     if(s == "true")
     {
          int d;
          cin>>d;
          node * root = new node(d);
          string l;
          cin>>l;
          if(l == "true")
          {
               root->left = buildtree(l);
          }
          string r;
          cin>>r;
          if(r == "true")
          {
               root->right = buildtree(r);
          }
          return root;
     }
     return NULL;
     }
void inorder(node*root)
{
     if(root!=NULL)
     {
          inorder(root->left);
          cout<<root->data<<" ";
          inorder(root->right);
     }
}
class HBpair{
public:
     int height;
     bool balance;
};
HBpair isbalanced(node * root)
{
     HBpair p;
     if(root== NULL)
     {
          p.height = 0;
          p.balance = true;
          return p;
     }
     HBpair l = isbalanced(root->left);
     HBpair r = isbalanced(root->right);
     if(abs(l.height - r.height)<=1 && l.balance && r.balance)
     {
          p.balance = true;
     }
     else
     {
          p.balance = false;
     }
     p.height = max(l.height,r.height)+1;
     return p;
}
int main()
{
     node * root = buildtree("true");

     inorder(root);
      cout<<"\n";
     if(isbalanced(root).balance)
     {
          cout<<"Yes the tree is height balanced";
     }
     else
     {
          cout<<"No the tree is not height balanced";
     }
     return 0;
}
