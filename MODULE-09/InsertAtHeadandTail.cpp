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
void print_normal(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void insert_at_head (Node* &head,Node* &tail, int val)
{
    Node* newNode = new Node (val);
    if(head==NULL)
{
    head=newNode;
    tail=newNode;
    return;
}
    newNode->next = head;
    newNode->next->pre=newNode;
    head=newNode;
}
void insert_at_tail (Node* &head,Node* &tail, int val)
{
    Node* newNode = new Node (val);
    if (tail==NULL)
    {
        head=newNode;
        tail=newNode;
    }
   tail->next=newNode;
   newNode->pre=tail;
   tail=newNode;
}
int main() {
    Node* head = new Node (10);
    Node* a = new Node (20);
    Node* b = new Node (30);
    Node* tail= b;
    head->next=a;
    a->pre=head;
    a->next=b;
    b->pre=a;
    insert_at_tail(head,tail,69);
    print_normal(head);

    return 0;
} 