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
void maximum(Node* head) {
    Node* tmp = head;              // Start from the head of the list
    int max = head->val;           // Initialize max to the value of the first node

    // Traverse the linked list
    while (tmp != NULL) {
        if (tmp->val > max) {      // If the current node's value is greater than max
            max = tmp->val;        // Update max to the current node's value
        }
        tmp = tmp->next;           // Move to the next node
    }
    cout << max;                   // Print the maximum value found
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
    maximum(head);
    return 0;
}