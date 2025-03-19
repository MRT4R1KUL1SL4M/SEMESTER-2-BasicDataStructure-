#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
        long long int prefix_sum[n];
        prefix_sum[0]=0;
        prefix_sum[1]=a[0];
        for(int i=2;i<n;i++){
            prefix_sum[i]=prefix_sum[i-1]+a[i-1];
            }
    for (int i = 0; i < n; i++) {
        cout << prefix_sum[i] << " ";
    }
    cout << endl;
    
    return 0;
}