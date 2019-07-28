#include<bits/stdc++.h>
using namespace std;
class node{
public:
     int data;
     node *next;

     ///Constructor
     node(int data)
     {
          this->data = data;
          next = NULL;
     }
     ~node() {
         if(next!=NULL) {
             delete next;
         }
     }

};

void deleteLL(node *&head) {
    delete head;
    head = NULL;
}
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
    node* temp = chotahead;
    head->next->next = head;
    temp->next = head;
    head->next = NULL;
    // node * c= head;
    //  c ->next->next = c;
    //  c->next = NULL;
     return chotahead;
}
node * mergeLL(node * head1, node* head2)
{
     if(head1 == NULL && head2 != NULL)
     {
          return head2;
     }
     else if(head2 == NULL && head1 != NULL)
     {
          return head1;
     }
     else if(head2 == NULL && head1 == NULL)
     {
         return NULL;
     }
     else
     {
        node * s;
        if(head1->data < head2->data)
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
}
int main()
{
    //  node * head = NULL;
    //  node * head2 = NULL;
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
    // printLL(head); /// We will get 5->4->3->2->1 coz we are inserting at head.
    // cout<<"\nLinked List after reversing is \n";
    head = reverseLL(head);
    // printLL(head);
     cin>>n2;
     while(n2--)
     {

          int e2;
          cin>>e2;
          insertathead(head2,e2);
     }
  //   cout<<"\n Linked List 2 is \n" ;
  //   printLL(head2);
   //  cout<<"\n After reverse Linked List 2 is \n";
     head2 = reverseLL(head2);
    // printLL(head2);

    head = mergeLL(head, head2);
    printLL(head);
    deleteLL(head);
    deleteLL(head2);
    cout<<endl;
     }
     return 0;
}
