// Aim To make a program that converts a temprature of a cite from Celsius to Fahrenheit
#include<stdio.h>
int main(){
    float celsius, faranheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    faranheit = (celsius * 9/5) + 32;
    printf("The temperature in Fahrenheit is: %.2f\n", faranheit); 
    return 0;
}