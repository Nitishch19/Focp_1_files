//assignment 3
/*Simple Calculator is a C language-based application used for
performing all the simple arithmetic operations like addition,
multiplication, division, and subtraction. The application can be
made using basic knowledge of C like if-else statements, loops,
etc.
The functionalities of the application are mentioned below:
1. Addition   2. Subtraction   3. Multiplication
4. Division   5. Logarithmic values  6. Square roots*/
#include <stdio.h>
#include <math.h>

int main() {
    char choice;

    printf("The Calculator welcomes You to it's Calculation World\n");

    do {
        // Display the menu
        printf("\nChoose your Domain:\n");
        printf("a - Addition\nb - Subtraction\nc - Multiplication\nd - Division\ne - Logarithmic values\nf - Square root\ng - Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice); // Note: a space before %c to ignore whitespace

        float num1, num2;

        if (choice == 'e' || choice == 'f') {
            printf("Enter a number: ");
            scanf("%f", &num1);

            if (choice == 'e') {
                if (num1 > 0) {
                    float logValue = log(num1);
                    printf("log(%.2f) = %.2f\n", num1, logValue);
                } else {
                    printf("Error: Logarithmic values are only defined for positive numbers.\n");
                }
            } else if (choice == 'f') {
                if (num1 >= 0) {
                    float sqrtV = sqrt(num1);
                    printf("sqrt(%.2f) = %.2f\n", num1, sqrtV);
                } else {
                    printf("Error: Square roots are only defined for non-negative numbers.\n");
                }
            }
        } else if (choice >= 'a' && choice <= 'd') {
            printf("Enter a numbers:");
            scanf("%f", &num1);
            printf("Enter another numbers:");
            scanf("%f", &num2);

            switch (choice) {
                case 'a':
                    printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
                    break;
                case 'b':
                    printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2);
                    break;
                case 'c':
                    printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2);
                    break;
                case 'd':
                    if (num2 != 0) {
                        printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2);
                    } else {
                        printf("Error: Division by zero.\n");
                    }
                    break;
            }
        } else if (choice == 'g') {
            printf("Visit again to the kingdom of calculations.\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 'g'); // Continue until the user chooses to quit

    return 0;
}
