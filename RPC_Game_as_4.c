//Rock Paper Scissors
//USE ONLINE COMPILER for this code to run

#include<stdio.h>

void random_selector_rpc_game(char choice) {
    int uc;
    printf("Select a random number between 0-100: ");
    scanf(" %d", &uc);
    
    if (uc >= 0 && uc < 33) {
        if (choice == 'p') {
            printf("The computer chose Rock 👊 So,\n👊 🖐️\nYOU WIN 🎉\n");
        }
        else if (choice == 'r') {
            printf("The computer chose Rock 👊 So,\n👊 👊\nIt is A TIE 🤝\n");
        }
        else {
            printf("The computer chose Rock 👊 So,\n👊 ✌️\nBetter LUCK NEXT TIME!\n");
        }
    }
    else if (uc >= 33 && uc < 66) {
        if (choice == 'p') {
            printf("The computer chose Paper 🖐️ So,\n🖐️ 🖐️\nIt is A TIE 🤝\n");
        }
        else if (choice == 'r') {
            printf("The computer chose Paper 🖐️ So,\n👊 🖐️\nYOU WIN 🎉\n");
        }
        else {
            printf("The computer chose Paper 🖐️ So,\n🖐️ ✌️\nBetter LUCK NEXT TIME!\n");
        }
    }
    else if (uc >= 66 && uc <= 100) {
        if (choice == 's') {
            printf("The computer chose Scissors ✌️ So,\n✌️ ✌️\nIt is A TIE 🤝\n");
        }
        else if (choice == 'p') {
            printf("The computer chose Scissors ✌️ So,\n🖐️ ✌️\nYOU WIN 🎉\n");
        }
        else {
            printf("The computer chose Scissors ✌️ So,\n👊 ✌️\nBetter LUCK NEXT TIME!\n");
        }
    }
    else {
        printf("Don't Break The Rules.\n");
    }
}

int main() {
    char ch, yn;
    
    do {
        printf("\nThe Master Computer Welcomes you to the game of Rock, Paper, Scissors.\n");
        printf("Enter your choice:\n👊 Rock - r\n🖐️ Paper - p\n✌️ Scissors - s\n");
        
        
        scanf(" %c", &ch);
        random_selector_rpc_game(ch);
        
        printf("Want to play again? Select y for yes and n for no: ");
        
        scanf(" %c", &yn);
    } while (yn == 'y');

    return 0;
}
