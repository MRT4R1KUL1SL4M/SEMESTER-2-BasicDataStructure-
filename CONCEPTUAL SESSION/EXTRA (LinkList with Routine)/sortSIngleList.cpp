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
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main() {
    Node* a=new Node(50);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(70);
    Node* e=new Node(20);
    Node* head=a;
    Node* tail=e;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;
    for ( Node *i=head;i!=NULL;i=i->next)
    {
        for ( Node* j=head;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    print_linekd_list(head);
    return 0;
}