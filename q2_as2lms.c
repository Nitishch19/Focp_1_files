//assignment 2 - q2

/*WAP to print grade of students as per their marks given in an array. (>=75-- A
grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade)*/

#include<stdio.h>
int main(){
    int marks[5]={};
    for(int i=0;i<5;i++){
        printf("Enter marks of student %d out of 100 :",i+1);
        scanf("%d",&marks[i]);
    }
    printf("\n");
    //grading
    for(int i=0;i<5;i++){
        if(marks[i]>=75)
        printf("Grade of Student %d is A with %d marks\n",i+1,marks[i]);
        else if(marks[i]<75 && marks[i]>=60)
        printf("Grade of Student %d is B with %d marks\n",i+1,marks[i]);
        else if(marks[i]<60 && marks[i]>=40)
        printf("Grade of Student %d is C with %d marks\n",i+1,marks[i]);
        else
        printf("Grade of Student %d is D with %d marks\n",i+1,marks[i]);
    }
    return 0;

}