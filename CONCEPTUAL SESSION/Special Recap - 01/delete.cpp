#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void delete_head(Node *&head)
{
    Node *delNode = head;
    head = head->next;
    delete delNode;
}

void delete_any_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *delNode = tmp->next;
    tmp->next = tmp->next->next;
    delete delNode;
}

int size(Node *head)
{
    int count=0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print(head);

    int pos;
    cin>>pos;

    if(pos>=size(head)) cout<<"Invalid"<<endl;
    else if (pos==0) delete_head(head);
    else delete_any_position(head,pos);

print(head);

    return 0;
}