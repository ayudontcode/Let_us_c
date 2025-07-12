// if else- conditional operation
#include <stdio.h>

int main(){
    int quantity;
    float amount;
    printf("enter quantity= \n");
    scanf("%d",&quantity);
    printf("enter amount of each= \n");
    scanf("%f",&amount);
    amount= quantity*amount;
    if (quantity>1000){
        amount= amount- amount*0.1;
        printf("the net amount to be paid after discount is %f", amount);
    
    }
    else 
    printf(" the net amount to be paid is %f", amount);
    return 0;
}