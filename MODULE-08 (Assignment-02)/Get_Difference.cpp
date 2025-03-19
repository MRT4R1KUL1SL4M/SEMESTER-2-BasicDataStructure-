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
int findDifference(Node* head) {
    if (head == NULL) {
        return 0;
    }

    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    Node* tmp = head;
    
    while (tmp != NULL) {
        if (tmp->val > maxVal) {
            maxVal = tmp->val;
        }
        if (tmp->val < minVal) {
            minVal = tmp->val;
        }
        tmp = tmp->next;
    }
    
    return maxVal - minVal;
}
void insertnode(Node* &head, Node* &tail, int val)
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
}
int main() {
    Node* head= NULL;
    Node* tail= NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
    insertnode(head,tail,val);
    }
    cout<<findDifference(head);
    return 0;
}