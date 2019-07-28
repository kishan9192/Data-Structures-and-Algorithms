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

void insertatHead(node *& head, int data)
{
     node * n = new node(data);
     n->next = head;
     head = n;
}

int searchLL(node * head, int key)
{
     static int pos = 0;
     if(head==NULL)
     {
          return -1;
     }
     if(head->data == key)
     {
          return pos;
     }
     pos++;
     searchLL(head->next, key);
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
     insertatHead(head,8);
     insertatHead(head,15);
     insertatHead(head,4);
     insertatHead(head,75);
     insertatHead(head,46);
     insertatHead(head,64);
     insertatHead(head,9);
     insertatHead(head,2);
     insertatHead(head,753);
     insertatHead(head,1);
     cout<<"Enter element to be searched ";
     int n;
     cin>>n;
     int pos = searchLL(head,n);
     if(pos == -1)
     {
          cout<<"\nElement is not present\n";
          cout<<"Elements in LL are\n";
          printLL(head);

     }
     else
     {
          cout<<"Element "<<n<<" is present at index "<<pos;
     }
}
