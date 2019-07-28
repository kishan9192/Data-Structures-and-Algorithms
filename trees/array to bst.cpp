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
node* buildtree(node* root, int data)
{
     if(root == NULL)
     {
          node* n = new node(data);
          return n;
     }
     else
     {
          if(data>root->data)
          {
               root->right = buildtree(root->right,data);
          }
          else
          {
               root->left = buildtree(root->left,data);
          }
     }
     return root;
}
node* takeinput(int a[], int n)
{
     int i = 0;
     node* root = NULL;
     while(i<n)
     {
          root = buildtree(root,a[i]);
          i++;
     }
     return root;
}
void inorder(node* root)
{
     if(root!=NULL)
     {
          inorder(root->left);
          cout<<root->data<<" , ";
          inorder(root->right);
     }
}
int main()
{
     int a[] = {2,4,1,6,8,45,127,8};
     int n = 8;
     node* root = NULL;
    root = takeinput(a,n);
     inorder(root);
}
