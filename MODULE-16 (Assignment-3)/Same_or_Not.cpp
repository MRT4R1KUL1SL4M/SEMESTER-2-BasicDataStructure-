#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *pre;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
class mystack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->pre = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *delNode = tail;
        tail = tail->pre;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete delNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class myqueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->pre = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *delNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete delNode;
            return;
        }
        head->pre = NULL;
        delete delNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    mystack st;
    myqueue q;
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++) 
    {
        int a;
        cin >> a;
        st.push(a);
    }
    for (int i = 0; i < m; i++) 
    {
        int b;
        cin >> b;
        q.push(b);
    }

    if (n != m) 
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) {
            break;
        }
        st.pop();
        q.pop();
    }

    if (st.empty()||q.empty()) 
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}