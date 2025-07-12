/*
Any year is input through the keyboard. 
Write a program to determine whether the year is a leap year or not.*/
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year \n");
    scanf("%d",&year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf(
            "the given year is a leap year"
        );
    }
    else{
        printf(
            "the given year is not a leap year"
        );
    }
    return 0;
}