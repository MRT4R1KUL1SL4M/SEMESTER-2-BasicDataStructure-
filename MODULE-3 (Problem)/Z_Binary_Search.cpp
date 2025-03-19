#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    while (q--) {
        int input;
        cin >> input;
        int l = 0, r = n - 1;
        bool found = false;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[mid] == input) {
                found = true;
                break;
            } else if (a[mid] > input) {
                r = mid - 1;
            } else if (a[mid] < input) {
                l = mid + 1;
            }
        }
        if (found) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
    return 0;
}
