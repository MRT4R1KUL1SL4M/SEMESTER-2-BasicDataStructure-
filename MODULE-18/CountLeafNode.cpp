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

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        //ber kore ana:
        Node* f=q.front();
        q.pop();

        //jabotiyo kaj:

        int l,r;
        cin>>l>>r;

        Node* left;
        Node* right;

        if(l==-1) left=NULL;
        else left=new Node(l);

        if(r==-1) right=NULL;
        else right=new Node(r);

        f->left=left;
        f->right=right;

        //children push:
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}

int countleafnode(Node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    else
    {
        int l=countleafnode(root->left);
        int r=countleafnode(root->right);
        return l+r;
    }
}

int main()
{
    Node* root=input_tree();
    cout<<countleafnode(root)<<endl;
    return 0;
}