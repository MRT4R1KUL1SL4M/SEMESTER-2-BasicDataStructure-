#include<bits/stdc++.h>  // Includes all standard libraries (not recommended for production code)
using namespace std;

int main() {
    int Q;  // Variable to store the number of queries
    cin >> Q;  // Read the number of queries from input

    list<int> LinkList;  // Define a doubly linked list named LinkList to store integers

    while (Q--) {  // Loop to process each query
        int X;  // Variable to store the type of operation (0, 1, or 2)
        size_t V;  // Variable to store the value or index depending on the operation
        cin >> X >> V;  // Read X and V from input

        if (X == 0) {  // If X is 0, perform push_front operation
            LinkList.push_front(V);
        } else if (X == 1) {  // If X is 1, perform push_back operation
            LinkList.push_back(V);
        } else if (X == 2) {  // If X is 2, perform erase operation if V is a valid index
            if (V < LinkList.size()) {  // Check if V is within bounds
                auto it = LinkList.begin();  // Iterator pointing to the beginning of the list
                advance(it, V);  // Move iterator 'it' V positions forward
                LinkList.erase(it);  // Erase element at the position pointed by 'it'
            }
        }

        // Print the list in normal order
        cout << "L -> ";
        for (auto it = LinkList.begin(); it != LinkList.end(); ++it) {
            cout << *it << " ";  // Print each element followed by a space
        }
        cout << endl;  // Move to the next line after printing the list

        // Print the list in reverse order
        cout << "R -> ";
        for (auto it = LinkList.rbegin(); it != LinkList.rend(); ++it) {
            cout << *it << " ";  // Print each element followed by a space
        }
        cout << endl;  // Move to the next line after printing the list
    }

    return 0;  // Return 0 to indicate successful execution
}
