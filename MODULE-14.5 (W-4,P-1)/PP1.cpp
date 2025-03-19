#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myQueue q1, q2;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q2.push(x);
    }
    if (q1.size()!= q2.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!q1.empty())
    {
        if (q1.front()!= q2.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        q1.pop();
        q2.pop();
    }
    cout << "YES" << endl;
    return 0;
}