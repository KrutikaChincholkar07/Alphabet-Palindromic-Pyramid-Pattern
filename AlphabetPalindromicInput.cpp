#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an uppercase letter: ";
    cin >> ch;

    int n = ch - 'A' + 1;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int s = 0; s < n - i - 1; s++)
            cout << "  ";

        // Increasing letters
        for (int j = 0; j <= i; j++)
            cout << char('A' + j) << " ";

        // Decreasing letters
        for (int j = i - 1; j >= 0; j--)
            cout << char('A' + j) << " ";

        cout << endl;
    }

    return 0;
}
