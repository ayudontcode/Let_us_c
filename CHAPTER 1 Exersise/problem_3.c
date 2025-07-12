// Aim to find the dimentions of nth sheet of paper when the first sheet is given
#include <stdio.h>
#include <math.h>
int main() {
    float length_of_A0 , breadth_of_A0;
    printf("Enter the length of A0 sheet in cm: ");
    scanf("%f", &length_of_A0);
    printf("Enter the breadth of A0 sheet in cm: ");
    scanf("%f", &breadth_of_A0);
    int n;
    printf("Enter the number of sheets (n): ");
    scanf("%d", &n);
    // Calculate the dimensions of the nth sheet
    float length_of_A_n = length_of_A0 / pow(2, n / 2);
    float breadth_of_A_n = breadth_of_A0 / pow(2, (n + 1) / 2);
    // Print the dimensions of the nth sheet
    printf("The dimensions of A%d sheet are: %.2f cm x %.2f cm\n", n, length_of_A_n, breadth_of_A_n);

    return 0;
}