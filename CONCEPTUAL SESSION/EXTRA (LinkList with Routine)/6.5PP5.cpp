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
bool sortttt(Node* head)
{
    if(head==NULL) return true;
    Node* tmp = head;
    while(tmp->next!=NULL)
    {
        if(tmp->val>tmp->next->val) return false;
        tmp=tmp->next;
    }
    return true;
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
    if(sortttt(head))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}