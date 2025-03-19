#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q;
    cin >> q;
    int l=0;
    int r=n-1;
    int index=0;
    bool found=false;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (arr[mid]==q) 
        {
            found=true;
            index=mid;
        }
        if (arr[mid]>q) r=mid-1;
        else l=mid+1;
    }
    if (found) cout<<"YES"<<"at the index"<<index<<endl;
    else cout<<"NO";
    return 0;
}