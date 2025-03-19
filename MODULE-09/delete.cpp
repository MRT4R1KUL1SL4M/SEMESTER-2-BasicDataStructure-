#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* pre;
    Node (int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void delete_head (Node* &head, Node* &tail)
{
    Node* delNode = head;
    head=head->next;
    delete delNode;
    if (head=NULL)
    {
        tail=NULL;
        return;
    }
    head->pre = NULL;
}
void delete_position(Node* head,int pos)
{
    Node* tmp=head;
    for ( int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* delNode = tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->pre=tmp;
    delete delNode;
}

void delete_tail(Node *&head,Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->pre;
    delete deleteNode;
    if(tail=NULL)
    {
        head=NULL;
        return;
    }
    tail->next = NULL;
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
void print_normal(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main() {
    Node* head = new Node (10);
    Node* a = new Node (20);
    Node* b = new Node (30);
    Node* c = new Node (40);
    Node* d = new Node (50);
    Node* tail = new Node (60);
    head->next=a;
    a->pre=head;
    a->next=b;
    b->pre=a;
    b->next=c;
    c->pre=b;    
    c->next=d;
    d->pre=c;
    d->next=tail;
    tail->pre=d;  
    int pos,val;
    cout<<"Enter the position which you want to delete: ";
    cin>>pos;
    if (pos==0)
    {
        delete_head(head,tail);
        print_normal(head);
        cout<<endl<<"Head Deleted";
    }
    else if (pos>=size(head))
    {
        cout<<"Invalid Index, You can not delete.";
    }
    else if (pos==size(head)-1)
    {
        delete_tail(head,tail);
        print_normal(head);
        cout<< endl<<"Deleted Tail";
    }
    else 
    {
        delete_position(head,pos);
        print_normal(head);
        cout<< endl<<"Deleted "<<pos<<" Number Item.";
    }
    return 0;
} 