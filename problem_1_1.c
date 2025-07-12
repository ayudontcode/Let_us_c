/* Aim to find the gross salary of ramesh when we have his net salary and home rent allowences as well as dearness allowence*/
#include<stdio.h>
int main(){
    int net_salary = 50000; // Example value for net salary
    int home_rent_allowance = 20*50000/100; // 40% of net salary
    int dearness_allowance = 40*50000/100; // 20% of net salary
    int gross_salary;
    gross_salary= net_salary+ home_rent_allowance+ dearness_allowance; // Formula for gross salary
    printf("The gross salary of Ramesh is: %d\n", gross_salary); // Output the result
        return 0; // Return 0 to indicate successful completion of the program
}
// WE SHOULD HAVE USED FLOAT INSTEAD OF INT FOR MORE ACCURATE RESULTS