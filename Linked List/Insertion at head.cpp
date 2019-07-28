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
int main()
{
     node * head = NULL;
     insertathead(head,1);
     insertathead(head,2);
     insertathead(head,3);
     insertathead(head,4);
     insertathead(head,5);
     printLL(head); /// We will get 5->4->3->2->1 coz we are inserting at head.
     return 0;
}
