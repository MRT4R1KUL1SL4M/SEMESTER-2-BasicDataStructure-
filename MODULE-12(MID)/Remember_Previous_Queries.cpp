#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    list<int> LinkList;

    while (Q--) {
        int X;
        size_t V;
        cin >> X >> V;

        if (X == 0) {
            LinkList.push_front(V);
        } else if (X == 1) {
            LinkList.push_back(V);
        } else if (X == 2) {
            if (V < LinkList.size()) 
            {
                auto it = LinkList.begin();
                advance(it, V);
                LinkList.erase(it);
            }
        }

        cout << "L -> ";
        for (auto it = LinkList.begin(); it!= LinkList.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;

        cout << "R -> ";
        for (auto it = LinkList.rbegin(); it!= LinkList.rend(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}