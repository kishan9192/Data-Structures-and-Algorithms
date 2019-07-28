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

void insertathead(node * head, int data)
{
     node * n = new node(data);
     n->next = head;
     head = n;
}
node * reverseLL(node *head)
{
     if(head->next == NULL || head == NULL )
     {
          return head;
     }


     node* chotahead = reverseLL(head->next);
    node * c= head;
     c ->next->next = c;
     c->next = NULL;
     return chotahead;
}
/*void insertattail(node *&head, int n)
{
		//node* newnode = new node(n);
		if(head == NULL)
		{
			head = newnode;
			return;
		}
		node * temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		return newnode;
}*/
void printLL(node * head)
{
     while(head!=NULL)
     {
          cout<<head->data<<" ";
          head= head->next;
     }
}
node * mergeLL(node * head1, node* head2)
{
     if(head1 == NULL)
          return head2;

     if(head2 == NULL)
          return head1;

     node * s;
     if(head1 ->data < head2->data)
     {
          s = head1;
          s->next = mergeLL(head1->next, head2);
     }
     if(head2 ->data < head1 ->data)
     {
          s= head2;
          s->next = mergeLL(head1, head2->next);
     }
     if(head1->data == head2->data)
     {
          s= head2;
          s->next = mergeLL(head1, head2->next);
     }
     return s;
}
int main()
{

	int t;
	cin >> t;
	while(t--)
	{
	     node * head1 = NULL;
	     node * head2 = NULL;
		int n1,n2;
		cin>>n1;
		while(n1--)
          {
                 int e;
                 cin>>e;
                  insertathead(head1,e);
          }
          head1 = reverseLL(head1);
          printLL(head1);
		cin>>n2;
		while(n2--)
          {
               int e2;
               cin>>e2;
               insertathead(head2,e2);
          }
          head2 = reverseLL(head2);
          printLL(head2);
	}
}
