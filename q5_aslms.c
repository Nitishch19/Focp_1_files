//assignment 1 - q5
/*WAP to check whether number is Perfect Number or not.
(To check perfect number, we have to find all divisors of that number and find their sum, if
sum of divisors is equal to number it means number is Perfect Number.)*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }

    if(sum == n) {
        printf("%d is a Perfect Number.\n", n);
    } else {
        printf("%d is not a Perfect Number.\n", n);
    }
    
    return 0;
}
