//assignment 1 - q1
//hcf of two integers
#include<stdio.h>
int HCF(int n1,int n2);
int main(){
    int num1,num2,hcf;
    printf("enter an integer:");
    scanf("%d",&num1);
    printf("enter another (different) integer:");
    scanf("%d",&num2);
    hcf=HCF(num1,num2);
    printf("HCF of %d,%d is %d",num1,num2,hcf);
    return 0;
}
int HCF(int n1,int n2){
    int h=1;
        for(int i=1;i<n1 || i<n2;i++){
            if(n1%i==0 && n2%i ==0){
                h=i;
            }
        }
    return h;
    }
