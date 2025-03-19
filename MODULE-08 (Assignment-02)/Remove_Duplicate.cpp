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
void remove_duplicates(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        Node* a = tmp;
        while (a->next != NULL) {
            if (a->next->val == tmp->val) {
                Node* deleteduplicate = a->next;
                a->next = a->next->next;
                delete deleteduplicate;
            } else {
                a = a->next;
            }
        }
        tmp = tmp->next;
    }
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
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
    remove_duplicates(head);
    print_linekd_list(head);
    return 0;
}