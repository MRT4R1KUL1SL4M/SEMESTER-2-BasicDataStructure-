#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        list<int> a;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }

        a.sort();
        a.unique();

        for (int value : a) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
