#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n ;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
        int input;
        cin >> input;
        int l = 0, r = n - 1;
        int dup=0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[mid] == input) {
                dup++;
            
            int temp = mid - 1;
            while (temp >= l && a[temp] == input) {
                dup++;
                temp--;
            }
            temp = mid + 1;
            while (temp <= r && a[temp] == input) {
                dup++;
                temp++;
            }
            break;

            } else if (a[mid] > input) {
                r = mid - 1;
            } else if (a[mid] < input) {
                l = mid + 1;
            }
        }
        if (dup>1) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    return 0;
}
