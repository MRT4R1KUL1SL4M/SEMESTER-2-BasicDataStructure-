#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);
        map<string, int> Count;
        string maxWord;
        int max = 0;

        while (ss >> word)
        {
            Count[word]++;
            if (Count[word] > max)
            {
                max = Count[word];
                maxWord = word;
            }
        }

        cout << maxWord << " " << max << endl;
    }

    return 0;
}