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
int search(Node* head, int X) 
{
    int index = 0;
    Node* tmp = head;
    
    while (tmp != NULL) {
        if (tmp->val == X) {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        Node* head = NULL;
        Node* tail = NULL;
        int val;
        while (true) {
            cin >> val;
            if (val == -1) {
                break;
            }
            insertnode(head, tail, val);
        }
        int X;
        cin >> X;
        cout << search(head, X) << endl;
    }
    
    return 0;
}