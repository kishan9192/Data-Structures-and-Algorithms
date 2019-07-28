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
void insert(node*&head, node*&tail, int data)
{
	if(head == NULL)
	{
		node* n = new node(data);
		head = tail = n;
	}
	else
	{
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}
node *kappend(node* head, int k, int n)
{
	if(head == NULL || head->next == NULL)
	{
		return head;
	}
    if(k==n)
    {
        return head;
    }
    if(k>n)
    {
        k=k-n;
    }
	node* current = head;
   // cout<<"Head = "<<head->data<<endl;
	node* prev = NULL;
	int cnt = 1;
	while(cnt<(n-k+1))
	{
		prev = current;
		current = current->next;
        cnt++;
	}
	prev->next = NULL;
   // cout<<"Prev = "<<prev->data;
   // cout<<"\nCurr = "<<current->data;
	node* temp = current;
   // cout<<current->data;
    //cout<<current->next->data;
    //cout<<current->next->next->data;
    cnt = 0;
	while(temp->next!=NULL)
	{
		temp = temp->next;
        cnt++;
	}
   // cout<<"\nTemp = "<<temp->data;
	temp->next = head;
	return current;
}
void printLL(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head= head->next;
	}
}
int main()
{
    //int t;
    //cin>>t;
    //while(t--)
   // {
	node * head = NULL;
	node* tail = NULL;
	int n,i;
	cin>>n;
	int e,k;
	for(i=0;i<n;i++)
	{
		cin>>e;
		insert(head,tail,e);
	}
	cin>>k;
	head = kappend(head,k,n);
	printLL(head);
    //cout<<endl;
    //}
	return 0;

}
