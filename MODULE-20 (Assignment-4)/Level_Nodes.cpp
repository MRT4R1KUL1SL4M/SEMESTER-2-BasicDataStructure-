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

void Level_node_print(Node *root, int val) {
    if (root == NULL) {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node*, int>> q;
    q.push({root, 0});
    bool found = false;

    while (!q.empty()) {
        int Size = q.size();
        bool lvl = false;

        for (int i = 0; i < Size; i++) {
            pair<Node*, int> pr = q.front();
            Node *node = pr.first;
            int level = pr.second;
            q.pop();

            if (level == val) {
                cout << node->val << " ";
                lvl = true;
            }

            if (node->left) {
                q.push({node->left, level + 1});
            }
            if (node->right) {
                q.push({node->right, level + 1});
            }
        }

        if (lvl) {
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Invalid" << endl;
    }
}

int main() {
    Node *root = input_tree();
    int x;
    cin >> x;
    Level_node_print(root, x);
    return 0;
}
