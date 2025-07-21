#include <stdio.h>
void displayBoard(char board[3][3]);
int checkWinner(char board[3][3]);
void playGame();

int main() {
    int choice;
    do {
        playGame();
        printf("\nDo you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    } while (choice == 1);
    return 0;
}

void displayBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 3 - 1) printf("|");
        }
        printf("\n");
        if (i < 3 - 1) printf("---+---+---\n");
    }
    printf("\n");
}

int checkWinner(char board[3][3]) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i];
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2];
    // No winner yet
    return 0;
}

void playGame() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char player = 'X';
    int moves = 0, winner = 0, position;

    printf("Welcome to Tic-Tac-Toe!\n");
    printf("The board positions are numbered as follows:\n");
    displayBoard(board);

    while (moves < 3 * 3 && winner == 0) {
        printf("Player %c, enter your position (1-9): ", player);
        scanf("%d", &position);

        if (position < 1 || position > 9) {
            printf("Invalid position! Try again.\n");
            continue;
        }

        int row = (position - 1) / 3;
        int col = (position - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Position already taken! Try again.\n");
            continue;
        }

        board[row][col] = player;
        moves++;
        displayBoard(board);

        winner = checkWinner(board);

        if (winner == 0) {
            player = (player == 'X') ? 'O' : 'X';
        }
    }

    if (winner != 0) {
        printf("Congratulations! Player %c wins!\n", winner);
    } else {
        printf("It's a tie!\n");
    }
}
