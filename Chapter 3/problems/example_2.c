/*
In a company an employee is paid as under:

If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary.
 If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary,
  If the employee's salary is input through the keyboard write a program to find his gross salary.
*/
#include<stdio.h>
int main(){
    float base_sal, hra, da, gross_sal;
    printf("enter the salary; \n");
    scanf("%f", &base_sal);
    if(base_sal < 1500){
        // HRA = 10%, DA = 90%
        hra = 0.1 * base_sal;
        da  = 0.9 * base_sal;
    } else {
        // HRA = 500, DA = 98%
        hra = 500;
        da  = 0.98 * base_sal;
    }

    gross_sal= base_sal+hra+da;
    printf("the gross salary of the employee is %.2f", gross_sal);
    return 0;
}