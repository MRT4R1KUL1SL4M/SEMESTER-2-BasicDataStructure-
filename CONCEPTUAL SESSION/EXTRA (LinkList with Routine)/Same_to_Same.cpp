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
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int n;
    while(cin>>n)
    {
        if(n==-1) break;
        insettattail(head1,tail1,n);
    }
    int m;
    while(cin>>m)
    {
        if(m==-1) break;
        insettattail(head2,tail2,m);
    }
    int sz=size(head1);
    int sz2=size(head2);
    if(sz==sz2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}