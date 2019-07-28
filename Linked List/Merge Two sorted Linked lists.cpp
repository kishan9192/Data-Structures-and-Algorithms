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
          cout<<temp->data<<"->";
          temp = temp->next;
     }
}
node * mergeLL(node * head, node * head2)
{
     if(head == NULL)
     {
          return head2;
     }
     if(head2 == NULL)
     {
          return head;
     }
     node *s;
     if(head->data < head2->data)
     {
          s= head;
          s->next = mergeLL(head->next, head2);
     }
     else if(head->data > head2->data)
     {
          s= head2;
          s->next = mergeLL(head, head2->next);
     }
     else if(head->data == head2->data)
     {
          s= head2;
          s->next = mergeLL(head, head2->next);
     }
     return s;
}
int main()
{
     node * head = NULL;
     insertathead(head,9);
     insertathead(head,8);
     insertathead(head,2);
     insertathead(head,1);
    insertathead(head,0);
     cout<<"Linked List 1 is \n";
     printLL(head); /// We will get 5->4->3->2->1 coz we are inserting at head.
     node * head2 = NULL;
     insertathead(head2, 11);
     insertathead(head2, 10);
     insertathead(head2, 7);
     insertathead(head2, 5);
    insertathead(head2, 1);
     insertathead(head2, 1);
     cout<<"Linked list 2 is \n";
     printLL(head2);

     head = mergeLL(head,head2);
     cout<<"Merged Linked list is \n";
     printLL(head);
     return 0;
}
