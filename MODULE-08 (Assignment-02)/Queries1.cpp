#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;

void insert_at_head(int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
    if (tail == NULL) {
        tail = head;
    }
}

void insert_at_tail(int value) {
    Node* new_node = new Node(value);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}

void delete_at_index(int index) {
    if (head == NULL || index < 0) {
        return;
    }

    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == NULL) {
            tail = NULL;
        }
        return;
    }

    Node* current = head;
    Node* prev = NULL;
    int count = 0;
    while (current && count < index) {
        prev = current;
        current = current->next;
        count++;
    }

    if (current == NULL) {
        return; // Index out of bounds
    }

    if (prev != NULL) {
        prev->next = current->next;
    }

    if (current == tail) {
        tail = prev;
    }

    delete current;
}

void print_list() {
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            insert_at_head(V);
        } else if (X == 1) {
            insert_at_tail(V);
        } else if (X == 2) {
            delete_at_index(V);
        }
        print_list();
    }
    return 0;
}
