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
void print_reverse(Node* tail)
{
    Node* tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->pre;
    }
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
    print_normal(head);
    cout<<endl;
    print_reverse(tail);

    return 0;
}