#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    stack<int>st;
    queue<int> q2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        int x=q.front();
        q.pop();
        st.push(x);
    }
        while (!st.empty())
        {
            q2.push(st.top());
            st.pop();
        }
    while (!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();   
    }
    return 0;
}