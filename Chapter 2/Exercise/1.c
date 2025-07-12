// aimis to find the sum of all digits of five digit number
#include<stdio.h>
int main(){
    int notenth,notho, nohen, noten, noone;
    int amount;
    printf("Enter the amount; \n");
    scanf("%d", &amount);
    notenth=amount/10000;
    amount=amount%10000;
    notho=amount/1000;
    amount=amount%1000;
    nohen=amount/100;
    amount=amount%100;
    noten=amount/10;
    amount=amount%10;
    noone=amount;
    amount=amount%1;
    int total= notenth+ notho+ nohen+ noten + noone;
    printf("the sum of the digits is %d", total);
    return 0;
}
