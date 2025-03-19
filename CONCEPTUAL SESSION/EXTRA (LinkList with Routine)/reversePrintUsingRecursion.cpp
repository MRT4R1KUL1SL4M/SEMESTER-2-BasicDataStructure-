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
void printreverse(Node* n)
{
    if (n==NULL) return;
    printreverse(n->next);
    cout<<n->val<<"->";
        
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
printreverse(head);
    return 0;
}