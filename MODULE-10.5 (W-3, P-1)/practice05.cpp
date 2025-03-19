#include <bits/stdc++.h>
using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;
//     Node* pre;
//     Node (int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->pre = NULL;
//     }
// };
// void insert(Node* &head, Node* &tail,int val)
// {
//     Node* addNode = new Node(val);
//     if(tail == NULL)
//     {
//         head = addNode;
//         tail = addNode;
//         return;
//     }
//     tail->next = addNode;
//     addNode->pre = tail;
//     tail = addNode;
// }
// void print(Node* head)
// {
//     Node* tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;
//     Node* pre;
//     Node (int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->pre = NULL;
//     }
// };
// void insert(Node* &head, Node* &tail,int val)
// {
//     Node* addNode = new Node(val);
//     if(tail == NULL)
//     {
//         head = addNode;
//         tail = addNode;
//         return;
//     }
//     tail->next = addNode;
//     addNode->pre = tail;
//     tail = addNode;
// }
// void print(Node* head)
// {
//     Node* tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
// }
int main() {
    // Node* head = NULL;
    // Node* tail = NULL;
    int val;
    list<int> values;

    while (cin >> val) {
        if (val == -1) {
            break;
        } else {
            values.push_back(val);
        }
    }

    values.sort();

    // for (int val : values) {
    //     insert(head, tail, val);
    // }

    // print(head);
    
        for (int val : values) {
        cout<<val<<" ";
    }
    return 0;
}