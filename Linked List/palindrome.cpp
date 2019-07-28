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
void insert(node *&head, node *&tail, int data)
{
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
void printLL(node * head)
{
     while(head!=NULL)
     {
          cout<<head->data;
          head=head->next;
     }
}
int main()
{
    node * head = NULL;
    node * tail = NULL;
    int n;
    int i;
    cin>>n;
    int e;
    for(i=0;i<n;i++)
    {
        cin>>e;
        insert(head,tail,e);
    }

    int a[n];
    node * temp = head;
    i=0;

    while(temp !=NULL)
    {
        a[i] = temp->data;
        i++;
        temp = temp->next;
    }
     int flag = 0;
    for(i=0; i<n/2 && n!=0 ;i++)
    {
        if(a[i] != a[n-i-1])
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
         cout<<"False";
    }
    else
    {
         cout<<"True";
    }
}
