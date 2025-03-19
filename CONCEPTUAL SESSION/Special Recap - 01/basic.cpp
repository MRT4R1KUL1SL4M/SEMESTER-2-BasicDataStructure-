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
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }
    Node *delNode = head;
    head = head->next;
    delete delNode;
}
void insert_at_any_position(Node *head, int val, int pos)
{
    if (pos == 0)
        insert_at_head(head, val);

    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++) //(int i=0;i<pos-1;i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void delete_any_position(Node *head, int pos)
{
    if (pos == 0)
        delete_head(head);

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << "Invalid Index" << endl;
        return;
    }
    Node *delNode = tmp->next;
    tmp->next = tmp->next->next;
    delete delNode;
}

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
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

    Node *head = NULL;
    cout << "Insert=1,Delete=2<<endl";
    int userinput;
    cin >> userinput;
    if (userinput == 1)
    {
        cout<<"Where you want to insert? 1 for Head, 2 for Any Position, 3 for Tail";
        int a;
        cin>>a;
        if(a==1)
        {
            cout<<"Enter your Value"<<endl;
            int val;
            cin>>val;
            insert_at_head(head,val);
        }
        else if (a==2)
        {
            cout<<"Enter your Value"<<endl;
            int val;
            cin>>val;
            cout<<"Enter your position"<<endl;
            int pos;
            cin>>pos;
            insert_at_any_position(head,val,pos);
        }
        else
        {
            cout<<"Enter your Value"<<endl;
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }
    }


    else
    {
        cout<<"What position you want to delete? 1 for Head, 2 for Any"<<endl;
        int b;
        cin>>b;
        if(b==1)
        {
           delete_head(head);
        }
        else if (b==2)
        {
            cout<<"Enter your position"<<endl;
            int pos;
            cin>>pos;
            delete_any_position(head,pos);
        }
    }
print(head);
    return 0;
}