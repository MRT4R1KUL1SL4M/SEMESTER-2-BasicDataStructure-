#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Upper Half
    for (int i = 0; i < N / 2; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "\\";
        // Print spaces between characters
        for (int j = 0; j < N - 2 * (i + 1); j++) {
            cout << " ";
        }
        cout << "/" << endl;
    }

    // Middle Line
    for (int i = 0; i < N / 2; i++) {
        cout << " ";
    }
    cout << "X" << endl;

    // Lower Half
    for (int i = N / 2 - 1; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "/";
        // Print spaces between characters
        for (int j = 0; j < N - 2 * i - 2; j++) {
            cout << " ";
        }
        cout << "\\" << endl;
    }

    return 0;
}
