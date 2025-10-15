#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int s = 0; s < rows - i - 1; s++) {
            printf("  ");
        }

        // Increasing letters
        for (int j = 0; j <= i; j++) {
            printf("%c ", 'A' + j);
        }

        // Decreasing letters
        for (int j = i - 1; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
