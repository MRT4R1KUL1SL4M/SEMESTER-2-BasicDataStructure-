#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    while (q--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        }
    bool sorted=true;
    for(int i=0;i<n-1;i++){
        if (a[i] > a[i+1]) 
        {
            sorted=false;
            break;
        }
    }
        if(sorted) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    return 0;
}