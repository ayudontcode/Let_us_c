// to write a programme to check wether the area is greater than perimeter of rectangle or not
#include<stdio.h>
int main(){
    float l, b;
    printf("enter the lenth; \n");
    scanf("%f",&l);
    printf("enter the breath; \n");
    scanf("%f",&b);
    float area, perimeter;
    area= l*b;
    perimeter= 2*l+2*b;
    printf("area is %.2f\n", area);
    printf("perimeter is %.2f\n", perimeter);
    if(area>perimeter){
        printf("the area is greater than perimeter ");
    }
    else{
        printf("perimeter is greater than area");
    }
    return 0;

}