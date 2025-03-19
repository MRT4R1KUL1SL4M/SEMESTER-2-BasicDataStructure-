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
void insert_at_position(Node* head, int val, int pos)
{
    Node* newNode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void inserthead(Node* head,int val)
{
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}
void inserttail(Node* &head,Node* tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print(Node* head)
{
    Node* tmp=head;
    cout<<"Your List is: ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while(tmp !=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main() {
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
    Node* d= new Node(50);
    Node* tail=d;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    print(head);
    int pos,val;
    cout<<"Enter the position where you want to insert the value: ";
    cin>>pos;
    cout<<"Enter the value: ";
    cin>>val;
    if(pos==0)
    {
        inserthead(head,val);
    }
    else if (pos==size(head))
    {
        inserttail(head,tail,val);
    }
    else if(pos>size(head))
    {
        cout<<"Invalid Position"<<endl;
    }
    else
    {
        insert_at_position(head,val,pos);
        }
    print(head);
    return 0;
}