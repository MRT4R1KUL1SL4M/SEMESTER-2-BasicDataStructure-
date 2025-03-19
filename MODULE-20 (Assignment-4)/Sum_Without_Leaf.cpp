#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree() {
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty()) {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void sum_without_leaf(Node* root) {
    if (root == NULL)
        return;
    int sum = 0;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* parent = q.front();
        q.pop();
        if (parent->left == NULL && parent->right == NULL)
            continue;
        sum += parent->val;
        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    cout<<sum<<endl;
}

int main() {
    Node *root = input_tree();
    sum_without_leaf(root);
    return 0;
}
