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

void insertattail(node *&head, int data) /// IMportant to pass head by reference here...
{
       node * n = new node(data);
     node * temp = head;
     if(head == NULL)
     {
          head = n;
          return;
     }
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
          head = head->next;
     }
}

node*mergeLL(node * head, node*head2)
{
     if(head == NULL)
          return head2;

     if(head2 == NULL)
          return head;

     node * s;

     if(head->data < head2->data)
     {
          s = head;
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
node * midpoint(node*head)
{
     node * slow = head;
     node * fast = head->next;
     while(fast != NULL && fast->next != NULL)
     {
          fast = fast->next->next;
          slow = slow->next;
     }
     return slow;
}

node* mergesort(node*head)
{
     if(head == NULL || head->next == NULL)
     {
          return head;
     }

     node * mid = midpoint(head);
     node * a = head;
     node * b = mid->next;
     mid->next = NULL;

     a = mergesort(a);
     b = mergesort(b);

     node*c = mergeLL(a,b);
     return c;

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
     insertatmid(head,3,9999);
     printLL(head);
     insertatmid(head,3,99);
    insertatmid(head,3,1551);
       cout<<endl;
       printLL(head);

       node * m = midpoint(head);
     cout<<"\nMid point of this Linked List is "<<m->data;
   //    mergesort(head);
       cout<<"\n List after sorting is \n";
     head = mergesort(head);
       printLL(head);



}
