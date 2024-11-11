//assignment 1 - q4
//WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)
#include <stdio.h>

int bitsub(int a, int b) {
    b = ~b + 1; 
    return a + b;
}

int main() {
    int num1, num2,result;
    printf("Enter first integers: ");
    scanf("%d", &num1);
    printf("Enter another integers: ");
    scanf("%d",&num2);
    result = bitsub(num1, num2);
    printf("The result of %d - %d is = %d", num1, num2, result);

    return 0;
}
