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
void middlenode(Node* head) {
    int sz = size(head);
    Node* tmp = head;
    for (int i = 0; i < sz / 2 - 1; i++) {
        tmp = tmp->next;
    }
    if (sz % 2 == 0) {
        cout << tmp->val << " " << tmp->next->val << endl;
    } else {
        // tmp = tmp->next;
        // cout << tmp->val << endl;
        
        cout << tmp->next->val << endl;
    }
}
int main() {
    Node* head=NULL;
    Node* tail=NULL;

    int n;
    while(cin>>n)
    {
        if(n==-1) break;
        insettattail(head,tail,n);
    }
    middlenode(head);
    return 0;
}