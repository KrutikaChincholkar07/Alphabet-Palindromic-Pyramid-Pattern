import java.util.Scanner;

public class AlphabetPyramid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an uppercase letter: ");
        char ch = sc.next().toUpperCase().charAt(0);

        int n = ch - 'A' + 1;

        for (int i = 0; i < n; i++) {
            // Spaces
            for (int s = 0; s < n - i - 1; s++)
                System.out.print("  ");

            // Increasing letters
            for (int j = 0; j <= i; j++)
                System.out.print((char)('A' + j) + " ");

            // Decreasing letters
            for (int j = i - 1; j >= 0; j--)
                System.out.print((char)('A' + j) + " ");

            System.out.println();
        }

        sc.close();
    }
}
