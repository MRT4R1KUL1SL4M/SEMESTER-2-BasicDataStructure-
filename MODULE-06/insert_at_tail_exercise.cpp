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
void insertatanyposition(Node* head,int val,int pos)
{
    Node* newnode = new Node(val);
    Node* tmp= head;
    for(int i=1;i<pos-1;i++)
    {
        tmp=tmp->next;
        }
        newnode->next=tmp->next;
        tmp->next=newnode;
}
void insertattail(Node* &head, int val)
{
    
    Node* newNode = new Node(val);
    Node* tmp=head;
    if(head==NULL)
    {
        head = newNode;
    }
    while(tmp->next !=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next = newNode;
}
void print(Node* head)
{
    Node* tmp=head;
    cout<<"Your Link List Is: ";
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
        }
        cout << endl;     
}

int main() {
    Node* head=NULL;
    while(true)
    {
        cout<<"Option 1: Insert at Head"<<endl;
        cout<<"Option 2: Insert at any position"<<endl;
        cout<<"Option 3: Insert at Tail"<<endl;
        cout<<"Option 4: Print The Link List"<<endl;
        cout<<"Option 5: Terminate"<<endl;
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
            int val;
            cout<<"Enter the value: ";
            cin>>val;
            int pos;
            cout<<"Enter the position: ";
            cin>>pos;
            insertatanyposition(head,val,pos);
        }
        else if(op==3)
        {
            int val;
            cout<<"Enter the value: ";
            cin>>val;
            insertattail(head,val);
        }
        else if(op==4)
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