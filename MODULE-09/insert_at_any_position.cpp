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
void insert_at_position(Node* head,int pos,int val)
{
    Node* newNode = new Node(val);
    Node* tmp=head;
    for ( int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next; //100 -> 30
    tmp->next=newNode; //20 ->30
    newNode->next->pre=newNode;   //100 <- 30
    newNode->pre=tmp; //20 <- 100

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
    Node* head = new Node (10);
    Node* a = new Node (20);
    Node* b = new Node (30);
    Node* c= new Node (40);
    head->next=a;
    a->pre=head;
    a->next=b;
    b->pre=a;
    b->next=c;
    c->pre=b;
    int pos,val;
    cout<<"Enter the position and value to insert"<<endl;
    cin>>pos>>val;
    if (pos>=size(head)) cout<<"Invalid Position";
    else 
    {
        insert_at_position(head,pos,val);
        print_normal(head);
    }
    return 0;
}