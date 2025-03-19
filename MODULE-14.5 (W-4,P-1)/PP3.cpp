#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    stack<int> st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        int x=st.top();
        st.pop();
        st2.push(x);
    }
    while (!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();   
    }
    return 0;
}