#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i=1;i<=n;i++)
    {
        a.push_back(i);
    }
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] <<" ";
        }  
    return 0;
}