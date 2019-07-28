///We can first find the length of linked list and then loop till (length-k) if we start from i =1, we need to traverse the ll in linear order


/// Second approach is to use slow and fast pointers. First make the fast pointer jump k steps, then move slow and fast pointer simultaneously one step and when fast pointer
///  reaches null, the slow pointer will point at Kth element from back.

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
node * kthnode(node * head, int k)
{
     if(head == NULL || head->next == NULL)
     {
          return head;
     }
     node*fast = head;
     node*slow = head;
     while(k--)
     {
          fast = fast->next;
     }
     while(fast->next!=NULL && fast!=NULL)
     {
          fast= fast->next;
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
     cout<<"\nEnter k ";
     int k;
     cin>>k;
     node * kth = kthnode(head,k);
     cout<<"\nKth node from last is "<<kth->data;
     return 0;
}

