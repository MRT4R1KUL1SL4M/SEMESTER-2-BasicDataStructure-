#include <iostream>
using namespace std;

// Node class for the doubly linked list
class Node {
public:
    int val;
    Node* next;
    Node* pre;
    
    // Constructor to initialize Node
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

// Function to insert a new node at the tail of the linked list
void inserttail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;  // If list is empty, newNode becomes both head and tail
    } else {
        tail->next = newNode;   // Insert newNode after tail
        newNode->pre = tail;    // Set newNode's previous pointer to current tail
        tail = newNode;         // Update tail to newNode
    }
}

// Function to check if the linked list is a palindrome
bool isPalindrome(Node *head) {
    if (head == NULL || head->next == NULL) {
        return true;  // If list is empty or has only one node, it's a palindrome
    }
    
    Node *tmp1 = head;
    Node *tmp2 = head;
    
    // Move tmp2 to the end of the list
    while (tmp2->next != NULL) {
        tmp2 = tmp2->next;
    }
    
    // Compare nodes from both ends towards the center
    while (tmp1 != tmp2 && tmp1->pre != tmp2) {
        if (tmp1->val != tmp2->val) {
            return false;  // If values don't match, not a palindrome
        }
        tmp1 = tmp1->next;  // Move tmp1 forward
        tmp2 = tmp2->pre;   // Move tmp2 backward
    }
    
    return true;  // If all comparisons are equal, it's a palindrome
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    
    // Reading values to create the linked list until -1 is encountered
    while (true) {
        cin >> val;
        if (val == -1) {
            break;  // Break loop when -1 is entered
        }
        inserttail(head, tail, val);  // Insert value into the linked list
    }  
    
    // Check if the linked list is a palindrome and print result
    if (isPalindrome(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
