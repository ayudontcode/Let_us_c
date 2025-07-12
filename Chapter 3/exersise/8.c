// given x,y to find it lies on x axis or y axis or origin 
#include <stdio.h>

int main(){
    float x,y;
    printf("enter co-ordinates(x,y); \n");
    scanf("%f %f",&x, &y );
    if (x==0 && y==0){
        printf("point is ar origin");
    
    }
    else if(x!=0 && y==0){
        printf("point is at x axis");
    }
    else if(x==0 && y!=0){
        printf("point is at y axis");
    }
    else{
        printf("point lie between both the axis");
    }


    return 0;
}