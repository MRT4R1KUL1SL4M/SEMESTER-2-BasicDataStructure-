#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node (int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertathead(Node* &head,Node* &tail, int val)
{
    Node* newNode= new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail=newNode;
    }
    newNode->next=head;
    head=newNode;
}
void insertatposition(Node* head,int val, int pos)
{
    Node* newNode= new Node(val);
    Node* tmp=head;
    for(int i=0;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void insertattail(Node* &head,Node* &tail, int val)
{
    Node* newNode= new Node(val);
    if(tail==NULL)
    {
        head = newNode;
        tail=newNode;
    }
    tail->next=newNode;
    tail=newNode;
}
void print(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<"->";
        tmp=tmp->next;
    }
    cout<<endl;
}
int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main() {
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* head=a;
    Node* tail=e;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;
    int pos,val;
    cout<<"Enter the position which you want to insert a new value: "<<endl;
    while (cin>>pos)
    {
    if(pos==0)
    {
        cout<<"Enter the value which you want to insert: "<<endl;
        cin>>val;
        insertathead(head,tail,val);
        print(head);
    }
    else if(pos>size(head))
    {
        cout<<"Invalid Position"<<endl;
        print(head);
    }
    else if(pos==size(head))
    {
        cout<<"Enter the value which you want to insert: "<<endl;
        cin>>val;
        insertattail(head,tail,val);
        print(head);
    }
    else
    {
        cout<<"Enter the value which you want to insert: "<<endl;
        cin>>val;
        insertatposition(head,val,pos);
        print(head);
    }
    }
    return 0;
}