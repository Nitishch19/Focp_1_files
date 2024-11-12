//assignment 1 - q6
//which quadreant the point lies
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the x coordinate :");
    scanf("%d",&x);
    printf("Enter the y coordinate :");
    scanf("%d",&y);
    //conditions
    if(x>=0 && y >=0){
        printf("The points(%d,%d) lies in I quadrant.",x,y);
    }
    else if(x<=0 && y>= 0){
        printf("The points (%d,%d) lies in II quadrant.",x,y);
    }
    else if(x<=0 && y<= 0){
        printf("The points (%d,%d) lies in III quadrant.",x,y);
    }
    else{
        printf("The points (%d,%d) lies in IV quadrant.",x,y);
    }
}