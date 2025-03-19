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
void insertnewelement(Node* &head,Node* &tail,int val)
{
    Node* newelement=new Node (val);
    if(head==NULL)
    {
        head=newelement;
        tail=newelement;
    }
    tail->next=newelement;
    tail=newelement;
}
void print(Node* head)
{
    Node* tmp= head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main() {
    Node* head= NULL;
    Node* tail= NULL;
    int input;
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        insertnewelement(head,tail,input);
    }
    print(head);
    return 0;
}