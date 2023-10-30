package Pattern;
import java.util.Scanner;

public class SpiralPattern {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int size;
        System.out.println("\nEnter the number for the matrix you want: ");
        size = scanner.nextInt();
        int left = 0, top = size - 1, N = 1;
        int i, j;
        int[][] board = new int[size][size];

        for (i = 0; i < size / 2; i++, left++, top--) {
            // Left to right
            for (j = left; j <= top; j++, N++) {
                board[left][j] = N;
            }
            // Top to down
            for (j = left + 1; j <= top; j++, N++) {
                board[j][top] = N;
            }
            // Right to left
            for (j = top - 1; j >= left; j--, N++) {
                board[top][j] = N;
            }
            // Down to top
            for (j = top - 1; j >= left + 1; j--, N++) {
                board[j][left] = N;
            }
        }

        System.out.println("~~~~~~~Result~~~~~~~");

        for (i = 0; i < size; i++) {
            for (j = 0; j < size; j++) {
                System.out.printf("%-5d", board[i][j]);
            }
            System.out.println("\n");
        }
    }
}
