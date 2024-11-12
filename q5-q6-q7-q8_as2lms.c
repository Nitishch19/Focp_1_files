//assignment 2 - q5 & q6 & q7 & q8
/*WAP to find sum of all scores in Marks array.*/
/*WAP to find average score of the Marks array.*/
/*WAP to check whether score is even or odd in an array.*/
/*WAP to find maximum & minimum score in the Marks array.*/
#include<stdio.h>
//function to find sum of an array with it's size
int arr_sum(int arr[],int s){
    int sum=0;
    for (int i=0;i<s;i++){
        sum+=arr[i];
    }
    return sum;}
//Odd or even Score
void odd_even_arr(int t){
    if(t%2==0)
    printf("Score is Even\n");
    else
    printf("Score is odd\n");
}
//MAX and MIN
void max(int arr[],int s){
    int ma = arr[0];
    for(int i=1;i<s;i++){
        if(arr[0]<arr[i]){
            ma=arr[i];
        }
    }
    printf("Maximum score in array is %d.\n",ma);
}
void min(int arr[],int s){
    int mi = arr[0];
    for(int i=1;i<s;i++){
        if(arr[0]>arr[i]){
            mi=arr[i];
        }
    }
    printf("Maximum score in array is %d.\n",mi);
}

int main(){
    int marks[5]={};
    int total;
    float avg;
    for (int i=0;i<5;i++){
    printf("Enter the marks out of 100 for subject %d :",i+1);
    scanf("%d",&marks[i]);}
    total = arr_sum(marks,5);
    printf("Sum of marks in array is %d .", total);
    printf("\n");
    //average of marks in array
    avg = total/5.0;
    printf("Average of marks in array is %.1f . \n",avg);
    //Score is odd or even
    odd_even_arr(total);
    //max and min
    max(marks,5);
    min(marks,5);

return 0;
}
