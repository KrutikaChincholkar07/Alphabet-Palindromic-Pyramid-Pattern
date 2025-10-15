public class AlphabetPalindromicPyramid {
    public static void main(String[] args) {
        int rows = 5;

        for (int i = 0; i < rows; i++) {
            // Spaces
            for (int s = 0; s < rows - i - 1; s++) {
                System.out.print("  ");
            }

            // Increasing letters
            for (int j = 0; j <= i; j++) {
                System.out.print((char)('A' + j) + " ");
            }

            // Decreasing letters
            for (int j = i - 1; j >= 0; j--) {
                System.out.print((char)('A' + j) + " ");
            }

            System.out.println();
        }
    }
}
