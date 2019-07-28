/// https://www.geeksforgeeks.org/reverse-a-list-in-groups-of-given-size/


#include<bits/stdc++.h>
using namespace std;
class node{
public:
     int data;
     node* next;
     node(int data)
     {
          this->data = data;
          next = NULL;
     }

};
void insertattail(node*&head, node*&tail, int data)
{
     if(head == NULL)
     {
          node * n = new node(data);
          head= tail= n;
     }
     else
     {
          node * n = new node(data);
          tail->next = n;
          tail = n;
     }
}
node * kreverse(node *head, int k)
{
     if(head == NULL || head->next == NULL)
     {
          return head;
     }
     node * current = head;
     node * n = NULL;
     node * prev = NULL;
     int cnt = 0;
     while(current!=NULL && cnt<k)
     {
          n = current->next;
          current->next = prev;
          prev = current;
          current = n;
          cnt++;
     }
     if(n!=NULL)
          head->next = kreverse(n,k);

     return prev;
}
void printLL(node * head)
{
     while(head!=NULL)
     {
          cout<<head->data<<" ";
          head = head->next;
     }
}
int main()
{
     node* head = NULL;
     node* tail = NULL;
     insertattail(head, tail, 1);
     insertattail(head, tail, 2);
     insertattail(head, tail, 3);
     insertattail(head, tail, 4);
     insertattail(head, tail, 5);
     insertattail(head, tail, 6);
     insertattail(head, tail, 7);
     insertattail(head, tail, 8);
  //   insertattail(head, tail, 9);
     printLL(head);
     cout<<endl;
     /// Applying k reverse with k = 3;
     head = kreverse(head,3);
     printLL(head);
}
