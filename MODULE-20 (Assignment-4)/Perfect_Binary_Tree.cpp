#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
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
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
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

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int TotalNode(Node *root)
{
    if (root == NULL)
        return 0;
    int l = TotalNode(root->left);
    int r = TotalNode(root->right);
    return l + r + 1;
}
int maxHeight_equal_depth(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight_equal_depth(root->left);
    int r = maxHeight_equal_depth(root->right);
    return max(l, r) + 1;
}
void perfect_binary_tree(Node* root)
{
    int perfecttree=pow(2,maxHeight_equal_depth(root)) - 1;
    if(perfecttree==TotalNode(root)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    Node *root = input_tree();
    perfect_binary_tree(root);
    return 0;
}