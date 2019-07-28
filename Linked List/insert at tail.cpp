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

void insertattail(node *& head, int data)
{
       node * n = new node(data);
     if(head == NULL) {
          head = n;
          return;
     }
     node * temp = head;
     while(temp->next != NULL)
     {
          temp=temp->next;
     }

     temp ->next = n;
     //n->next = NULL;
}
void insertatmid(node * head, int pos, int data)
{
     node * n = new node(data);
     for(int jump = 1; jump<=pos-1; jump++)
     {
          head = head->next;
     }
     node * temp = head->next;
   head->next = n;
   n->next = temp;
}
void printLL(node * head)
{
     while(head!=NULL)
     {
          cout<<head->data<<"->";
          head = head->next;
     }
}
int main()
{
     node * head = NULL;
     insertattail(head,3);
     insertattail(head,35);
     insertattail(head,12);
     insertattail(head,73);
     insertattail(head,755);
     insertattail(head,1);
     insertattail(head,152);
     insertattail(head,15);
     insertattail(head,73);
     insertattail(head,31);
     insertattail(head,64);
     insertattail(head,53);
   //  insertatmid(head,3,9999);
     printLL(head);
       //insertatmid(head,3,9999);
       cout<<endl;
       //printLL(head);
}
