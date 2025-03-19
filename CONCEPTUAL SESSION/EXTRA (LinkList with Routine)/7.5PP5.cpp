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
void insettattail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->next=NULL;
    tail=newNode;
}
void printreverse(Node* n)
{
        if(n==NULL) return;
        printreverse(n->next);
        cout<<n->val<<" ";
}
void sortnode(Node* head)
{
    Node* tmp = head;
    for (Node* i=tmp;i!=NULL;i=i->next)
    {
        for (Node* j=tmp;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            swap(i->val,j->val);
        }
        tmp=tmp->next;
    }
}
int main() {
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(cin>>val)
    {
        if(val==-1) break;
        insettattail(head,tail,val);   
    }
    sortnode(head);
    printreverse(head);
    return 0;
}