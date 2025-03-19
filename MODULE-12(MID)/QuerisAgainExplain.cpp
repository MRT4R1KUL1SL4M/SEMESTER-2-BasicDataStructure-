#include<bits/stdc++.h>  // Includes all standard libraries (not recommended for production code)
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

// Function to print the linked list in normal order
void print_normal(Node* head) {
    Node* temp = head;  // Temporary pointer to iterate through the list
    cout << "L ->";  // Indicates it's printing in normal order
    while(temp != NULL) {  // Loop until end of list (NULL is reached)
        cout << " " << temp->val;  // Print value of current node
        temp = temp->next;  // Move to next node
    }
    cout << endl;  // Print newline after the list
}

// Function to print the linked list in reverse order
void print_reverse(Node* tail) {
    Node* temp = tail;  // Temporary pointer starting from tail to head towards the start
    cout << "R ->";  // Indicates it's printing in reverse order
    while(temp != NULL) {  // Loop until end of list (NULL is reached)
        cout << " " << temp->val;  // Print value of current node
        temp = temp->pre;  // Move to previous node (moving towards head)
    }
    cout << endl;  // Print newline after the list
}

// Function to insert a node at a specified position in the linked list
void insert_at_position(Node* &head, Node* &tail, int pos, int val) {
    Node* newNode = new Node(val);  // Create a new node with given value

    if(pos == 0) {  // If inserting at the beginning of the list
        newNode->next = head;  // New node points to current head
        if(head != NULL) {  // If list is not empty
            head->pre = newNode;  // Update current head's previous pointer to new node
        } else {
            tail = newNode;  // Update tail to new node if list was empty
        }
        head = newNode;  // Update head to new node
    } else {  // Inserting at a position other than the beginning
        Node* temp = head;  // Temporary pointer to traverse the list
        for(int i = 0; i < pos - 1 && temp != NULL; i++) {  // Traverse to (pos-1)th node
            temp = temp->next;
        }
        if(temp == NULL || temp->next == NULL) {  // If position is out of bounds
            if(temp == NULL) {  // Handle case where list is empty or position is beyond end
                cout << "Invalid" << endl;
            }
            temp->next = newNode;  // Insert new node at the end of the list
            newNode->pre = temp;  // Update new node's previous pointer
            tail = newNode;  // Update tail to new node
        } else {  // Inserting at a valid position within the list
            newNode->next = temp->next;  // New node points to the next node
            newNode->pre = temp;  // New node's previous points to current node
            temp->next->pre = newNode;  // Update next node's previous pointer to new node
            temp->next = newNode;  // Update current node's next pointer to new node
        }
    }
}

// Function to get the size of the linked list
int size(Node* head) {
    Node* temp = head;  // Temporary pointer to traverse the list
    int count = 0;  // Initialize count of nodes to 0
    while(temp != NULL) {  // Loop until end of list (NULL is reached)
        count++;  // Increment count for each node
        temp = temp->next;  // Move to next node
    }
    return count;  // Return total count of nodes in the list
}

// Main function where program execution begins
int main() {
    Node* head = NULL;  // Initialize head pointer to NULL (empty list)
    Node* tail = NULL;  // Initialize tail pointer to NULL (empty list)
    
    int n;
    cin >> n;  // Read number of insertions from input
    for(int i = 0; i < n; i++) {  // Loop to perform n insertions
        int pos, val;
        cin >> pos >> val;  // Read position and value to be inserted
        
        // Validate position
        if(pos < 0 || pos > size(head)) {  // Check if position is out of bounds
            cout << "Invalid" << endl;  // Print "Invalid" if position is invalid
        } else {
            insert_at_position(head, tail, pos, val);  // Insert node at specified position
            print_normal(head);  // Print list in normal order after insertion
            print_reverse(tail);  // Print list in reverse order after insertion
        }
    }
    
    return 0;  // Return 0 to indicate successful execution
}
