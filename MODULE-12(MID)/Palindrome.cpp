#include <iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* pre;
    Node (int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void inserttail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;
    }
}
bool isPalindrome(Node *head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }
    Node *tmp1 = head;
    Node *tmp2 = head;
    while (tmp2->next != NULL) {
        tmp2 = tmp2->next;
    }
    while (tmp1 != tmp2 && tmp1->pre != tmp2) {
        if (tmp1->val != tmp2->val) {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->pre;
    }
    return true;
}
int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        inserttail(head, tail, val);
    }  
    if (isPalindrome(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
