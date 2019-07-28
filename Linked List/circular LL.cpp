#include<bits/stdc++.h>
using namespace std;
class node{
public:
     int data;
     node * next;
     node(int data)
     {
          this->data = data;
     }
};
void insertattail(node *&head, node *&tail, int data)
{
     if(head == NULL)
     {
          node *n = new node(data);
          n->next = head;
          head = tail = n;
     }
     else
     {
          node * n = new node(data);
          tail->next = n;
          tail = n;
          tail->next = head;
     }
}

void printCLL(node * head)
{
     node * temp = head;
     while(temp->next != head)
     {
          cout<<temp->data<<" ";
          temp = temp->next;
     }
     cout<<temp->data;
}
int main()
{
     node * head = NULL;
     node * tail = NULL;
     int n,e;
     cin>>n;
     for(int i = 0; i<n;i++)
     {
          cin>>e;
          insertattail(head,tail,e);
     }
     cout<<endl;
     printCLL(head);

}
