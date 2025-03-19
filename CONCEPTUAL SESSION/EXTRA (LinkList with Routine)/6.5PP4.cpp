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
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void inputt(Node* &head,Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    tail->next=NULL;
}
void print(Node* head)
{
    Node* tmp=head;
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
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main() {
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(cin>>val)
    {
        if(val==-1)
        {
            break;
        }
        inputt(head,tail,val);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int index,val;
        cin>>index>>val;
        if(index==0)
        {
            insertathead(head,tail,val);
            print(head);
        }
        else if (index>size(head))
        {
            cout<<"Invalid"<<endl;
        }
        else if (index==size(head))
        {
            inputt(head,tail,val);
            print(head);  
        }
        else
        {
            insertatposition(head,val,index);
            print(head);
        }
    }
    return 0;
}