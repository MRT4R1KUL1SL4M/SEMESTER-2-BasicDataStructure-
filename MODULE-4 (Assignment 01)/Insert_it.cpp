#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    cin >> n ;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        }
    cin >> m ;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        }
    cin >> k;
    a.insert( a.begin()+k, b.begin(),b.end());
    for (int i = 0; i < n+m; i++) {
        cout << a[i] << " ";
        }
    return 0;
}