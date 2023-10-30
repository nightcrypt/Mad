#include <stdio.h>

// Function to print the Tic Tac Toe board
void printBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
}

// Function to check if a player has won
int checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || // Check rows
            (board[0][i] == player && board[1][i] == player && board[2][i] == player) || // Check columns
            (board[0][0] == player && board[1][1] == player && board[2][2] == player) || // Check diagonal
            (board[0][2] == player && board[1][1] == player && board[2][0] == player))   // Check reverse diagonal
        {
            return 1;
        }
    }
    return 0;
}

int main() {
    char board[3][3] = { {'1', '2', '3'},
                         {'4', '5', '6'},
                         {'7', '8', '9'} };
    int player = 1;
    int choice;
    int row, col;
    int moves = 0;

    do {
        // Print the board
        printBoard(board);

        // Player X goes on odd turns, Player O goes on even turns
        player = (moves % 2 == 0) ? 1 : 2;

        // Get player input for their move
        printf("\nPlayer %d, enter your choice (1-9): ", player);
        scanf("%d", &choice);

        // Convert choice to row and column
        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        // Check if the cell is empty
        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Cell already occupied! Try again.\n");
            continue;
        }

        // Place the move on the board
        board[row][col] = (player == 1) ? 'X' : 'O';
        moves++;

        // Check if any player has won
        if (checkWin(board, 'X')) {
            printBoard(board);
            printf("\nPlayer 1 (X) wins!\n");
            break;
        } else if (checkWin(board, 'O')) {
            printBoard(board);
            printf("\nPlayer 2 (O) wins!\n");
            break;
        }

        // Check if the game is a draw
        if (moves == 9) {
            printBoard(board);
            printf("\nThe game is a draw!\n");
            break;
        }
    } while (1);

    return 0;
}

