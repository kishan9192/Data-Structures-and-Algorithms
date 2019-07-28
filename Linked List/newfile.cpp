#include<bits/stdc++.h>
using namespace std;
class node{
public:
     int data;
     node *next;

     //Constructor
     node(int data)
     {
          this->data = data;
          next = NULL;
     }

};
void insertathead(node *&head, int data)
{
     node *n = new node(data);
     n->next = head;
     head = n;
}
void printLL(node * head)
{
     node*temp = head;
     while(temp!=NULL)
     {
          cout<<temp->data<<" ";
          temp = temp->next;
     }
}

node * reverseLL(node *head)
{
     if(head->next == NULL || head == NULL )
     {
          return head;
     }


     node* chotahead = reverseLL(head->next);
    node * c= head;
     c ->next->next = c;
     c->next = NULL;
     return chotahead;
}
node * mergeLL(node * head1, node* head2)
{
     if(head1 == NULL)
          return head2;

     if(head2 == NULL)
          return head1;

     node * s;
     if(head1 ->data < head2->data)
     {
          s = head1;
          s->next = mergeLL(head1->next, head2);
     }
     if(head2 ->data < head1 ->data)
     {
          s= head2;
          s->next = mergeLL(head1, head2->next);
     }
     if(head1->data == head2->data)
     {
          s= head2;
          s->next = mergeLL(head1, head2->next);
     }
     return s;
}
int main()
{
     //node * head = NULL;
     //node * head2 = NULL;
     int t;
     cin>>t;
     while(t--)
     {
     node * head = NULL;
     node * head2 = NULL;
     int n,n2;
     cin>>n;
     while(n--)
     {
          int e;
          cin>>e;
          insertathead(head,e);
     }
    head = reverseLL(head);
     cin>>n2;
     while(n2--)
     {
          int e2;
          cin>>e2;
          insertathead(head2,e2);
     }
     head2 = reverseLL(head2);
    head = mergeLL(head, head2);
    printLL(head);
    cout<<endl;
     }
     return 0;
}

