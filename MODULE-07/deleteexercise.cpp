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
void dlthead(Node* &head)
{
    Node* deletehead=head;
    head= head->next;
    delete deletehead;
}
void dltpos(Node * head, int pos)
{
    Node *tmp= head;
    for (int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node *deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
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
    int pos;
    cout<<"Enter your position which you want to delete: ";
    cin>>pos;
    if(pos==0)
    {
        dlthead(head);
    }
    else if(pos>=size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else
    {
        dltpos(head,pos);
    }

    print(head);
    return 0;
}