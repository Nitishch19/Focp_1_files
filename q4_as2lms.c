//assignment 2 - q4
/*AP to find Who & how many students have scored 99 in an array Marks.*/
#include <stdio.h>
int main()
{
    int marks[10]={};
    int i=0;
    int flag =0;
    for(i=0;i<10;i++){
    printf("\nenter the marks of student %d = ",i);
    scanf("%d",&marks[i]);
    }
    // printf("marks of 10 students :");
    for(i=0;i<10;i++){
        // printf("the marks of student %d = %d\n",i+1,marks[i]);
        if(marks[i]==99){
        flag++;
        }
    }
    if(flag==0)
    printf("None of the students have scored 99.");
    else
    printf("%d Number of students have scored 99.",flag);
    return 0 ;
}