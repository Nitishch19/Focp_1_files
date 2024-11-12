/* WAP a program to increase every students marks by 5 and then print the updated array*/
#include <stdio.h>
int main()
{
    int marks[10]={};
    int i=0;
    // taking input from the user
    for(i=0;i<10;i++){
    printf("\nenter the marks of student %d = ",i+1);
    scanf("%d",&marks[i]);
    }
    printf("marks of 10 students :\n");
    //displaying the entered marks
    for(i=0;i<10;i++){
        printf("the marks of student %d = %d\n",i+1,marks[i]);  
    }
    printf("\nMarks of the students after adding 5 to marks scored :\n");
    //updating and displaying the marks after adding 5
    for(i=0;i<10;i++){
        marks[i]+=5;
        printf("The marks of student %d = %d\n",i+1,marks[i]); }
    return 0 ;
}