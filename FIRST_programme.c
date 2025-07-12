// aim: To build a program to find a simple interest containing principal, rate of interest, time, and simple interest
#include<stdio.h>
int main()
{
    int principal = 10000; // Example value for principal
    int rate_of_interest= 7; // Example value for rate of interest
    int time = 4; // Example value for time in years
    int simple_intrest;
    simple_intrest = ((principal * rate_of_interest * time) / 100); // Formula for simple interest
    printf("The simple interest is: %d\n", simple_intrest); // Output the result
    return 0;
}