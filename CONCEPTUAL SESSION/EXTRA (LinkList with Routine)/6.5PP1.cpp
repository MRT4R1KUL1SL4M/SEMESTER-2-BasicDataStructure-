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
void inputt(Node* &head,Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    tail->next=NULL;
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
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(cin>>val)
    {
        if(val==-1)
        {
            break;
        }
        inputt(head,tail,val);
        
    }
    cout<<size(head);

    return 0;
}