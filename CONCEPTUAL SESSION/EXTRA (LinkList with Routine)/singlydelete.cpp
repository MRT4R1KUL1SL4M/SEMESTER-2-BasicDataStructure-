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

void deletehead(Node* &head) {
    if (head == NULL) return;
    Node* delNode = head;
    head = head->next;
    delete delNode;
}

void deleteanyposition(Node* head, int pos) {
    if (head == NULL) return;
    Node* tmp = head;
    for (int i = 0; i < pos - 1 && tmp->next != NULL; i++) {
        tmp = tmp->next;
    }
    if (tmp->next == NULL) return;
    Node* delNode = tmp->next;
    tmp->next = tmp->next->next;
    delete delNode;
}

void deleteatTail(Node* head) {
    if (head == NULL || head->next == NULL) {
        deletehead(head);
        return;
    }
    Node* prev = NULL;
    Node* tmp = head;
    while (tmp->next != NULL) {
        prev = tmp;
        tmp = tmp->next;
    }
    delete tmp;
    prev->next = NULL;
}

void deletebyvalue(Node* &head, int value) {
    if (head == NULL) return;

    if (head->val == value) {
        deletehead(head);
        return;
    }

    Node* tmp = head;
    while (tmp->next != NULL && tmp->next->val != value) {
        tmp = tmp->next;
    }

    if (tmp->next == NULL) {
        cout << "Value not found in the list" << endl;
        return;
    }

    Node* delNode = tmp->next;
    tmp->next = tmp->next->next;
    delete delNode;
}

void print(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << "->";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}

int size(Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* head = a;
    Node* tail = e;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    int x;
    cout << "If you want to delete by position input 1, and if you want to delete by value input 2: ";
    cin >> x;
    if (x == 1) {
        cout << "Enter the position which you want to delete: ";
        int pos;
        cin >> pos;
        if (pos == 0) {
            deletehead(head);
            print(head);
        } else if (pos >= size(head)) {
            cout << "Your position is incorrect, so you can't delete it" << endl;
        } else if (pos == size(head) - 1) {
            deleteatTail(head);
            print(head);
        } else {
            deleteanyposition(head, pos);
            print(head);
        }
    } else if (x == 2) {
        cout << "Enter the value which you want to delete: ";
        int val;
        cin >> val;
        deletebyvalue(head, val);
        print(head);
    } else {
        cout << "You entered a wrong value" << endl;
    }
    return 0;
}
