#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        a[i][0] = toupper(a[i][0]);
    }
    for (int i = 0; i < n; i++) {
        cout << a[i]<<endl; 
    }
    return 0;
}