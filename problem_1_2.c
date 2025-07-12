// Convert the distance between two cities (given in kilometers) into meters, feet, inches, and centimeters
#include<stdio.h>
int main(){
    float km; // Declare a variable to hold the distance in kilometers
    printf("Enter the distance between two cities in kilometers: ");
    // Declare a variable to hold the distance in kilometers
    scanf("%f", &km);
    // Convert the distance to meters, feet, inches, and centimeters
    float m, 
          ft, 
          in,
          cm;
    m = km* 1000; // Kilometers to meters
    ft = km * 3280.84; // Kilometers to feet
    in = km * 39370.1; // Kilometers to inches
    cm = km * 100000; // Kilometers to centimeters
    printf("The distance in meters is: %.2f m\n", m);
    printf("The distance in feet is: %.2f ft\n", ft);   
    printf("The distance in inches is: %.2f in\n", in);
    printf("The distance in centimeters is: %.2f cm\n", cm);
    return 0;
}