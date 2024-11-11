//assignment 1 - q4
//WAP to accept two integer numbers and swap them using 4 different methods in C
#include <stdio.h>
int main(){
    printf("First method : using a third variable\n");
    int a,b,c;
    printf("Enter an integer(a):");
    scanf("%d",&a);
    printf("Enter another integer(b):");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("Swapped numbers a = %d , b = %d\n",a,b);

    printf("\nSecond Method : without a third variable\n");
    int num1,num2;
    printf("Enter an integer(num1):");
    scanf("%d",&num1);
    printf("Enter another integer(num2):");
    scanf("%d",&num2);
    num1=num1-num2;
    num2=num2+num1;
    num1=num2-num1;
    printf("Swapped numbers num1 = %d , num2 = %d\n",num1,num2);

    printf("\nThird Method : with * and / \n");
    int x,y;
    printf("Enter an integer(x):");
    scanf("%d",&x);
    printf("Enter another integer(y):");
    scanf("%d",&y);
    x = x * y; 
    y = x / y; 
    x = x / y;
    printf("Swapped numbers x = %d , y = %d\n",x,y);

    printf("\nFourth Method : with ^ \n");
    int m,n;
    printf("Enter an integer(m):");
    scanf("%d",&m);
    printf("Enter another integer(n):");
    scanf("%d",&n);
    m = m ^ n; 
    n = m ^ n; 
    m = m ^ n;
    printf("Swapped numbers m = %d , n = %d\n",m,n);
    return 0;
}