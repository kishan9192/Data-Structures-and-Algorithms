#include<iostream>
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
void insertattail(node *&tail, node *&head, int data)
{
    if(head == NULL)
    {
        node * n = new node(data);
        tail = head = n;
    }
    else
    {
        node * n = new node(data);
        tail->next = n;
        tail = n;
    }
}
node* kthstep(node * head, int k)
{
    if(head == NULL || head->next == NULL)
    {return head;}
    node * slow = head;
    node * fast = head;
    while(k--)
    {
        fast = fast->next;
    }
    while(fast->next!= NULL && fast!=NULL)
    {

        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
void printLL(node * head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main() {
    node * head = NULL;
    node * tail = NULL;
    int e;
    cin>>e;
    while(e>0)
    {
        insertattail(tail, head, e);
        cin>>e;
    }
    int k;
    cin>>k;
    node * last = kthstep(head,k);
    cout<<last->data;

	return 0;
}
