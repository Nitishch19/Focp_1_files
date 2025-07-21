//assigmnent 5
//Hangman game
/*The Hangman Game is one of the most famous games played
on computers.
The Rules of the game are as follows:
1. There is given a word with omitted characters and you
need to guess the characters to win the game.
2. Only 3 chances are available and if you win the Man
survives or Man gets hanged.
So, it is the game can be easily designed in C language with
the basic knowledge of if-else statements, loops, and some
other basic statements. The code of the game is easy, short,
and user-friendly.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "INSTAGRAM";     // The word to guess
    int wordLength = strlen(word);  // Length of the word
    char guessed[wordLength + 1];   // Array to track guessed letters
    int chances = 3;                // Number of chances
    int correctGuesses = 0;         // Counter for correct guesses
    char guess;
    int i;

    // Initialize the guessed letters array with underscores
    for (i = 0; i < wordLength; i++) {
        guessed[i] = '_';
    }
    guessed[wordLength] = '\0';     // Null-terminate the guessed array

    printf("\nWelcome to the game of HANGMAN!\n");
    printf("Enter all the words you want to guess in UPPERCASE ONLY.\n");

    printf("  |----------\n  |               \n  |\n  |\n  |\n  |\n  |\n  |\n------\n");
    // Game loop
    while (chances > 0 && correctGuesses < wordLength) {
        printf("\nWord to guess: %s\n", guessed);
        printf("You have %d chances left.\n", chances);

        // Provide hints based on remaining chances
        if (chances == 3) {
            printf("Hint 1: This is a social media platform.\n");
            printf("  |----------\n  |        ( )\n  |\n  |  \n  |\n  |\n  |\n------\n");
        } else if (chances == 2) {
            printf("Hint 2: It allows you to share photos and videos.\n");
            printf("  |----------\n  |        ( )\n  |         |\n  |         |\n  |\n  |\n  |\n------\n");

        } else if (chances == 1) {
            printf("Hint 3: It is owned by Meta (formerly Facebook).\n");
            printf("  |----------\n  |        ( )\n  |     ----|----\n  |         |\n  |\n  |\n  |\n------\n");
        }

        // Get user's guess
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        int found = 0; // Flag to check if the guess was correct

        // Check if the guessed letter is in the word
        for (i = 0; i < wordLength; i++) {
            if (word[i] == guess && guessed[i] == '_') {
                guessed[i] = guess; // Reveal the letter in the guessed word
                correctGuesses++;
                found = 1;
            }
        }

        // If the guess was incorrect, reduce chances
        if (!found) {
            chances--;
            printf("Incorrect guess!\n");
        } else {
            printf("Good guess!\n");
        }
    }

    // Check if the player won or lost
    if (correctGuesses == wordLength) {
        printf("\nCongratulations! You guessed the word: %s\n", word);
    } else {
        printf("\nGame Over! You've used all your chances.\n");
        printf("THE MAN IS HANGED.\n");
        printf("  |---------|\n");
        printf("  |        ( )\n");
        printf("  |     ----|----\n");
        printf("  |         |\n");
        printf("  |        / \\ \n");
        printf("  |       /   \\ \n");
        printf("  |\n");
        printf("------\n");
        printf("The word was: %s\n", word);
    }

    return 0;
}
