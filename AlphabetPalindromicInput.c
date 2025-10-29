#include <stdio.h>

int main() {
    char ch;
    printf("Enter an uppercase letter: ");
    scanf(" %c", &ch);

    int n = ch - 'A' + 1;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int s = 0; s < n - i - 1; s++)
            printf("  ");

        // Increasing letters
        for (int j = 0; j <= i; j++)
            printf("%c ", 'A' + j);

        // Decreasing letters
        for (int j = i - 1; j >= 0; j--)
            printf("%c ", 'A' + j);

        printf("\n");
    }

    return 0;
}
