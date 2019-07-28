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
void insertattail(node *&head, node*&tail, int data)
{    static int i = 0;
     if(head == NULL)
     {
          node * n = new node(data);

          head = tail = n;
     }
     else
     {
          node * n = new node(data);

          tail->next = n;
          tail = n;
     }
}
int searchfor(node * head, int e)
{    int i=0;
     while(head!=NULL)
     {
          if(head->data == e)
          {
               return i;
          }
          i++;
          head = head->next;
     }
     return -1;
}
void printLL(node*head, node* tail, node *temp)
{
     while(head->next !=temp)
     {
          cout<<head->data<<" ";
          head = head->next;
     }
}
int main()
{
     node* head = NULL;
     node * tail = NULL;
     node * temp = head;
     int e;
     cin>>e;
     while(e>0)
     {
          insertattail(head,tail,e);
          cin>>e;
               int i = searchfor(head,e);
               if(i!=-1)
               {
                    node * temp = head;
                    while(i--)
                    {
                         temp = temp->next;
                    }
                    tail->next = temp;
                    break;
               }
     }
     printLL(head,tail,temp);
}
