#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        }
    int ce=0;
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i]+1 ==a[j]) {
                ce++;
                break;
            }
        }
     }
        cout<<ce<<endl;  
    return 0;
}