// aim to inter change the value taken by user
// this is question based on swapping 
#include<stdio.h>
int main(){
    float c,d;
    printf("enter value of c \n");
    scanf("%f", &c);
    printf("enter value of d \n");
    scanf("%f", &d);
    float swap;
    swap= c;
    c= d;
    d= swap;
    printf("After swapping:\n");
    printf("Value of c = %.2f\n", c);
    printf("Value of d = %.2f\n", d);
    
    return 0;
}