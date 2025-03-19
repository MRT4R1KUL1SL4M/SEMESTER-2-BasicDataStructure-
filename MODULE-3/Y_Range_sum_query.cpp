#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin>>n>>q;
    vector<long long int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
        vector<long long int> ps(n);
        ps[0]=a[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+a[i];
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;r--;
            long long int sum=0;
            if(l==0) sum=ps[r];
            else sum=ps[r]-ps[l-1];
    cout<<sum<<endl;
        }
    return 0;
    }