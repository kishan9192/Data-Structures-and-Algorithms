#include<bits/stdc++.h>
using namespace std;
class node{
public:
     int data;
     node * next;

     node(int data)
     {
          this->data = data;
          next = NULL;
     }
};
void insertattail(node *&tail, node*&head, int data)
{
     if(tail == NULL)
     {
          node * newnode = new node(data);
          head = tail = newnode;
     }
     else
     {
          node * newnode = new node(data);
          tail->next = newnode;
          tail = newnode;
     }
}
void insertathead(node *&head, int data)
{
     node * n = new node(data);
     n->next = head;
     head = n;
}
void printLL(node * head)
{
     while(head!=NULL)
     {
          cout<<head->data<<" ";
          head=head->next;
     }
}
void mergeLL(node * head1, node * head2)
{
     if(head1 == NULL)
          return head2;
     if(head2 == NULL)
          return head1;

     node * s;
     if(head1->data <= head2->data)
     {
          s = head1;
          s->next = mergeLL(head1->next, head2);
     }
     if(head1->data > head2->data)
     {
          s = head2;
          s->next = mergeLL(head1, head2->next);
     }
     return s;
}
int main()
{
     node * head = NULL;
     node * tail = NULL;
     insertattail(tail,head,1);
     insertattail(tail,head,2);
     insertattail(tail,head,3);
     insertattail(tail,head,4);
     insertattail(tail,head,5);
     insertattail(tail,head,6);
     insertathead(head,44);

     printLL(head);
}
