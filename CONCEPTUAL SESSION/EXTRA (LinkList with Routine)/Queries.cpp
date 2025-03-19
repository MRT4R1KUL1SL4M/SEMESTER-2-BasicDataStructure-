#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertathead(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insertattail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->next = NULL;
    tail = newNode;
}

void deletehead(Node *&head) {
    if (head == NULL) return;
    Node *delNode = head;
    head = head->next;
    delete delNode;
}

void deleteanyposition(Node *&head, int pos) {
    if (head == NULL) return;
    if (pos == 0) {
        deletehead(head);
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < pos - 1 && tmp->next != NULL; i++) {
        tmp = tmp->next;
    }
    if (tmp->next == NULL) return;
    Node *delNode = tmp->next;
    tmp->next = tmp->next->next;
    delete delNode;
}

void deleteatTail(Node *&head, Node *&tail) {
    if (head == NULL || head->next == NULL) {
        deletehead(head);
        tail = NULL;
        return;
    }
    Node *prev = NULL;
    Node *tmp = head;
    while (tmp->next != NULL) {
        prev = tmp;
        tmp = tmp->next;
    }
    delete tmp;
    prev->next = NULL;
    tail = prev;
}

void print(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node *head) {
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insertathead(head, tail, v);
        } else if (x == 1) {
            insertattail(head, tail, v);
        } else if (x == 2) {
            if (v == 0) {
                deletehead(head);
            } else if (v == size(head) - 1) {
                deleteatTail(head, tail);
            } else {
                deleteanyposition(head, v);
            }
        }
        print(head);
    }
    return 0;
}
