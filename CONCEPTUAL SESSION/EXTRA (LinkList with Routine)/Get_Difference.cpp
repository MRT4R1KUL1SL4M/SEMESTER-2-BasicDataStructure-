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
int minimum(Node* head) {
    Node* tmp = head;
    int min = head->val;
    while (tmp != NULL) {
        if (tmp->val < min) {
            min = tmp->val; 
        }
        tmp = tmp->next;
    }
    return min;
}
int maximum(Node* head) {
    Node* tmp = head;
    int max = head->val;
    while (tmp != NULL) {
        if (tmp->val > max) {
            max = tmp->val; 
        }
        tmp = tmp->next;
    }
    return max;
}
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
int main() {
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(cin>>val)
    {
        if(val==-1) break;
        insettattail(head,tail,val);
    }
    int x=(maximum(head)-minimum(head));
    cout<<x;
    return 0;
}