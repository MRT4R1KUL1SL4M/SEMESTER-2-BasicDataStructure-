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
void insert(Node* &head, Node* &tail,int val)
{
    Node* addNode = new Node(val);
    if(tail == NULL)
    {
        head = addNode;
        tail = addNode;
        return;
    }
    tail->next = addNode;
    addNode->pre = tail;
    tail = addNode;
}
void print(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
void reverseprint(Node* tail)
{
    Node* tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->pre;
    }
}
int main() {
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (cin>>val)
    {
    if(val==-1)
    {
        break;
    }
    else insert(head,tail,val);
    }
    if(print(head)==reverseprint(tail))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO";
    return 0;
}