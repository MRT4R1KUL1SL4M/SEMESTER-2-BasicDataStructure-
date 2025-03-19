#include<bits/stdc++.h>  // Includes all standard libraries (not recommended for production code)
using namespace std;

int main() {
    list<int> MyList;  // Declares a doubly linked list named MyList to store integers
    int val;  // Declares an integer variable val

    while (true) {  // Infinite loop until break statement
        cin >> val;  // Reads an integer from input into val
        if (val == -1) {  // If val is -1, exit the loop
            break;
        }
        MyList.push_back(val);  // Pushes val to the back of MyList
    }

    MyList.sort();  // Sorts MyList in ascending order
    MyList.unique();  // Removes consecutive duplicate elements from MyList

    for (auto &val : MyList) {  // Iterates through MyList using a reference to each element val
        cout << val << " ";  // Prints each element of MyList followed by a space
    }

    return 0;  // Return 0 to indicate successful execution
}
