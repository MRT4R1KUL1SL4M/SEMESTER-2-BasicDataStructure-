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
    for (int i = 0; i <n ; i++) 
        {
            if (a[i]<0){
                a[i]= 2;
            }
            else if (a[i]>0){
                a[i]= 1;
            }
        }
    for (int i = 0; i<n; i++) 
        {
            cout << a[i] << " ";
        }
    return 0;
}