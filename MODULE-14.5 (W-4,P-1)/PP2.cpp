#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    queue<int> q;
    int n, m;
    
    // Input stack size and elements
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    
    // Input queue size and elements
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    
    // If sizes are different, they can't be the same
    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }
    
    // Check if the elements in the order of removal are the same
    bool isSame = true;
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) {
            isSame = false;
            break;
        }
        st.pop();
        q.pop();
    }
    
    if (isSame) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
