// aim to find the area of circle, paramerter of the circle when radius is given
// aim to find the area of rectangle, perimeter of the rectangle when length and breadth is given
#include <stdio.h>
int main(){
    float radius, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius; // Area of circle = πr²
    perimeter = 2 * 3.14 * radius; // Perimeter of circle = 2πr
    printf("The area of the circle is: %.2f\n", area);  
    printf("The perimeter of the circle is: %.2f\n", perimeter);
    float length, breadth, area_rectangle, perimeter_rectangle;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area_rectangle = length * breadth; // Area of rectangle = length * breadth
    perimeter_rectangle = 2 * (length + breadth); // Perimeter of rectangle = 2(length + breadth)
    printf("The area of the rectangle is: %.2f\n", area_rectangle);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter_rectangle);
    return 0;
}