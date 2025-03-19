#include <bits/stdc++.h>

using namespace std;

bool oparator( pair<string, int>& a, pair<string, int>& b) {
    
    if (a.first != b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}

int main() {
    int n;
    cin >> n;  

    vector<pair<string, int>>pairs(n);

    for (int i = 0; i < n; i++) 
    {

        cin >> pairs[i].first >> pairs[i].second;
    }

   
    sort(pairs.begin(), pairs.end(), oparator);
    for (auto p : pairs) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}