#include <stdio.h>
int main()
{
    int marks[10]={};
    int i=0;
    int flag =0;
    for(i=0;i<10;i++){
    printf(" \nenter the marks of student %d = ",i);
    scanf("%d",&marks[i]);
    }
    printf("\nmarks of 10 students :\n");
    for(i=0;i<10;i++){
        printf("the marks of student %d = %d\n",i+1,marks[i]);
        }
    for(i=0;i<10;i++){
        if(marks[i]==99){
        flag=1;
        printf("The first student who scored 99 is with student %d\n",i+1);
        break;}}
    return 0 ;
}