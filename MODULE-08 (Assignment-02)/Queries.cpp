#include <iostream>
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

void insert_head(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL) {
        tail = head;
    }
}

void insert_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_node(Node *&head, Node *&tail, int pos) {
    if (head == NULL)
        return;
    
    Node *tmp = head;
    if (pos == 0) {
        head = head->next;
        delete tmp;
        if (head == NULL) {
            tail = NULL;
        }
        return;
    }
    
    for (int i = 1; tmp != NULL && i < pos; i++) {
        tmp = tmp->next;
    }
    
    if (tmp == NULL || tmp->next == NULL)
        return;
    
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    
    if (tmp->next == NULL) {
        tail = tmp;
    }
}

void print_linked_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            insert_head(head, tail, V);
        } else if (X == 1) {
            insert_tail(head, tail, V);
        } else if (X == 2) {
            delete_node(head, tail, V);
        }
        print_linked_list(head);
    }
    return 0;
}
