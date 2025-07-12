/*
Any integer is input through the keyboard. 
Write a program to find out whether it is and number or even number.
even= 2,4,6,8,10= 2 ke multiple n%2==0*/
#include<stdio.h>
int main(){
    int n;
    printf(" enter the number \n");
    scanf("%d", &n);
    if(n%2==0){
        printf("number is even");
    }
    else {
        printf("number is odd");
    }
    return 0;
}