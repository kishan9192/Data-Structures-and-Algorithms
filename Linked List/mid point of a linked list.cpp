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
node* midpoint(node * head)
{
     if(head == NULL || head->next == NULL)
     {
          return head;
     }
     node * slow = head;
     node* fast = head->next;
     while(fast != NULL && fast->next != NULL) ///You need to write the condition like this only
     {
          fast = fast->next->next;
          slow = slow->next;
     }
     return slow;
}
int main()
{
     node * head = NULL;
     insertathead(head,1);
     insertathead(head,2);
     insertathead(head,3);
     insertathead(head,4);
     insertathead(head,5);
     printLL(head); /// We will get 5->4->3->2->1 coz we are inserting at head.
     cout<<"\n Mid point of this LL is ";
     node * mid = midpoint(head);
     cout<<mid->data;
     return 0;
}
