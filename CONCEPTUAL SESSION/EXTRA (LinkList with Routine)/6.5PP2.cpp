#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void input(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

bool hasDuplicate(Node* head)
{
    int count[101]={0};
    Node *tmp=head;
    while(tmp!=NULL)
    {
        if(count[tmp->val]>0)
        {
            return true;
        }
        count[tmp->val]++;
        tmp=tmp->next;
    }
    return false;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (cin >> val) {
        if (val == -1) {
            break;
        }
        input(head, tail, val);
    }

    if (hasDuplicate(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
