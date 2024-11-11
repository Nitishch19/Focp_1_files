//assignment 1 - q1
//armstrong no check 
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int org, rem, result = 0, n = 0;
    
    org= num;

    // Count the number of digits
    while (org != 0) {
        org /= 10;
        n++;
    }

    org = num;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (org != 0) {
        rem = org % 10;
        result += pow(rem, n);
        org /= 10;
    }

    // Check if the number is equal to the sum of its digits raised to the power
    if (result == num){
        return 1;}
    else{
        return 0;}
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isArmstrong(number) == 1){
        printf("%d is an Armstrong number.\n", number);}
    else{
        printf("%d is not an Armstrong number.\n", number);}

    return 0;
}
