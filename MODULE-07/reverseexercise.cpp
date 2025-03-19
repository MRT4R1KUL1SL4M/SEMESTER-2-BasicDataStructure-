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
void recursionnn(Node* n)
{
    while(n==NULL)
    {
        return;
    }
    cout<<n->val<<" ";
    recursionnn(n->next);
}
void reverserecursionnn(Node* n)
{
    while(n==NULL)
    {
        return;
    }
    reverserecursionnn(n->next);
    cout<<n->val<<" ";
}
int main() {
    Node* head= new Node (10);
    Node* a= new Node (20);
    Node* b= new Node (30);
    Node* c= new Node (40);
    head->next=a;
    a->next=b;
    b->next=c;
    recursionnn(head);
    cout<<endl<<endl;
    reverserecursionnn(head);
    return 0;
}