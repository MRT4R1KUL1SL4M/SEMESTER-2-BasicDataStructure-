#include <bits/stdc++.h>
using namespace std;
int main() {
    queue <int> Queue1;
    queue <int> Queue2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        Queue1.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        Queue1.push(x);
    }
    while(!Queue2.empty())
    {
        Queue1.push(Queue2.front());
        Queue2.pop();
    }
        while(!Queue1.empty())
    {
        cout<<(Queue1.front())<<" ";
        Queue1.pop();
    }
    return 0;
}