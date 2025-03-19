#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        }
    vector <int> b;
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        b.push_back(y);
        }
    b.insert(b.end(),a.begin(),a.end());

    for (int i = 0; i < b.size(); i++) {
    cout << b[i] << " ";
        }
    return 0;
}