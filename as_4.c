//Rock Paper Scissors
#include<stdio.h>
void random_selector_rpc_game(char choice){
    int uc;
    printf("select random a number between 0-100 : ");
    scanf(" %d",&uc);
    if(uc>=0 && uc<33){
        if(choice == 'p'){
            printf("The computer choose Rock So,\nYOU WIN \n");
        }
        else if(choice == 'r'){
            printf("The computer choose Rock so,\n It is A TIE \n");
        }
        else{
            printf("The computer choose Rock so,\nBetter LUCK NEXT TIME!\n");
        }
    }
    else if(uc>=33 && uc<66){
        if(choice == 'p'){
            printf("The computer choose Paper so,\n It is A TIE \n");
        }
        else if(choice == 'r'){
            printf("The computer choose Paper So,\n YOU WIN  \n");
        }
        else{
            printf("The computer choose Paper so,\n  Better LUCK NEXT TIME!\n");
        }
    }
    else if(uc>=66 && uc<=100){
        if(choice == 's'){
            printf("The computer choose Scissors so,\n  It is A TIE \n");
        }
        else if(choice == 'p'){
            printf("The computer choose Scissors So,\n YOU WIN \n");
        }
        else{
            printf("The computer choose Scissors so,\n Better LUCK NEXT TIME!\n");
        }
    }
    else{printf("Don't Break The Rules.");}
}
int main(){
    char ch,yn;
    start:
    printf("\nThe Master Computer Welcomes you to the game of Rock,Paper,Scissors.\n");
    printf("Enter your choice:\nRock - r\nPaper - p\nScissors - s\n");
    scanf(" %c",&ch);
    random_selector_rpc_game(ch);
    printf("\n");
    printf("Want to play Again select y for yes and no for n :");
    scanf(" %c",&yn);
    if(yn == 'y'){
        goto start;
    }
    if(yn != 'y' || yn == 'n'){
        printf("BYE.");}
    return 0;
}