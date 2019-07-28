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

void insertathead(node *&head, int data)
{

     node *n = new node(data);
     n->next = head;
     head = n;
}

void deleteathead(node *&head)
{
     node *temp = head;
     head = head->next;
     delete temp;
}

void deleteattail(node *&head)
{

     node *temp = head;
     node *prev = NULL;
     while(temp->next != NULL)
     {
          prev = temp;
          temp = temp->next;
     }


       delete temp;
        prev->next = NULL;
       return;
}

void deleteatmiddle( node *&head, int pos)
{
     node * temp = head;
     node * prev = head;
     if(pos == 1)
     {
          deleteathead(head);
          return;
     }
     for(int jump = 1; jump<=pos-1; jump++)
     {

       prev= temp;
          temp=temp->next;}

     prev->next = temp->next;
     delete temp;


}

void printLL(node * head)
{
     while(head!=NULL)
     {
          cout<<head->data<<"->";
          head=head->next;
     }
}

int main()
{
     node * head = NULL;
     insertathead(head,9);
     insertathead(head,8);
     insertathead(head,7);
     insertathead(head,6);
     insertathead(head,5);
     insertathead(head,4);
     insertathead(head,3);
     insertathead(head,2);
     insertathead(head,1);


     printLL(head);
          cout<<endl;
          deleteathead(head);
          cout<<"After deleting head node\n";
          printLL(head);
          deleteattail(head);
          cout<<"After deleting tail\n";
         // deleteattail(head);
          printLL(head);
//deleteatmiddle(head,1);
          cout<<"After deleting at index 5\n";
          deleteatmiddle(head,3); ///If you give position = 1 here, the head node gets deleted. So you need to pass head by reference.
           printLL(head);

}
