#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int s = 0; s < rows - i - 1; s++)
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
