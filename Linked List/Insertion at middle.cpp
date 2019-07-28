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

void insertathead(node *& head, int data)
{
     node * n = new node(data);
     n->next = head;
     head = n;
}
void Insertatmiddle(node * head, int data, int pos)
{
     node * n = new node(data);
     node * temp = head;
     for(int jump = 1; jump <=pos-1; jump++)
          temp = temp->next;
     n->next = temp->next;
     temp->next = n;

}
void printLL(node * head)
{
     while(head!=NULL)
     {
          cout<<head->data<<"->";
          head=head->next; /// head won't change because we are passing head by value not by reference.
     }
}
int main()
{
     node * head = NULL;
     insertathead(head,5);
     insertathead(head,4);
     insertathead(head,3);
     insertathead(head,2);
     insertathead(head,1);
     Insertatmiddle(head,500,3); /// 500 is the data to be inserted at index 3. But before inserting data in middle we need to have a linked list. so lets use Insert at head.
     printLL(head);
}
