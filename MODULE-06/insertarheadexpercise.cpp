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
void insertathead(Node* &head, int val)
{
    Node* newNode=new Node(val);
    newNode->next = head;
    head = newNode;
}
void print(Node* head)
{
    Node* tmp= head;
    cout<<"Your Link List Is: ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main() {
    Node* head=NULL;
    while(true)
    {
        cout<<"Option 1: Insert in head"<<endl;
        cout<<"Option 2: Print The Link List"<<endl;
        cout<<"Option 3: Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            int val;
            cout<<"Enter the value: ";
            cin>>val;
            insertathead(head,val);
        }
        else if(op==2)
        {
            print(head);
        }
        else
        {
            break;
        }
    }
    return 0;
}