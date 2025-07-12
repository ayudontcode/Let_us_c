// Aim to find the area of tringle when lenth of three sides are given
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b,c; // Length of three sides
    float s, area; // Semi-perimeter and area of the triangle
    printf("Enter the length of three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    // Calculate semi-perimeter
    s = (a + b + c) / 2;
    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    // Print the area
    printf("Area of the triangle is: %.2f\n", area);
    return 0;
}
