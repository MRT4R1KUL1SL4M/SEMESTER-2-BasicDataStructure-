#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        }
        int sum1[n];
        sum1[0] = a[0];
    for(int i =1 ;i<n ;i++){
        sum1[i] = sum1[i-1]+a[i] ;
    }
        int sum2[n];
        sum2[n-1] = a[n-1];
    for(int i =n-2 ;i>=0 ;i--){
        sum2[i] = sum2[i+1] + a[i] ;
    }

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (sum1[i] == sum2[i]) {
            cout << i << endl;
            found = true;
            break;
        }
    }

    return 0;
}