#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    queue<string> que;

    for (int i = 0; i < q; ++i) {
        int com;
        cin >> com;

        if (com == 0) {
            string s;
            cin >> s;
            que.push(s);
        } else if (com == 1) {
            if (!que.empty()) {
                cout << que.front() << endl;
                que.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}