// If a five-digit number is input through the keyboard, write a program to reverse the number-
#include <stdio.h>

int main(){
    int a,b,c,d,e;
    printf("enter value of digit at 5th place= \n");
    scanf("%d", &a);
    printf("enter value of digit at 4th place= \n");
    scanf("%d", &b);
    printf("enter value of digit at 3th place= \n");
    scanf("%d", &c);
    printf("enter value of digit at 2th place= \n");
    scanf("%d\n", &d);
    printf("enter value of digit at 1th place= \n");
    scanf("%d", &e);
    printf("the reverse of the number is %d %d %d %d %d", e,d,c,b,a);
    return 0;
} 
/*BETTER APPROCH TO BE MORE LOGICAL
Reverse digits of a 5-digit number 
#include <stdio.h>
int main()
{
int n, d5, d4, d3, d2, d1;
long int revnum;
printf ("\nEnter a five digit number (less than 32767):");
scanf ("%d", &n);
d5=n% 10; 5th digit 
n = n / 10 remaining digits 
d * 4 = n% 10;  4th digit
n = n / 10 remaining digits 
d * 3 = n% 10;  3rd digit 
n = n / 10 remaining digits 
d * 2 = n% 10; 2nd digit 
n = n / 10  remaining digits 
d1=n% 10; 1st digit 
revnum = d5*10000+ d4* 1000+ d3* 100+ d2*10 + d1;
specifier %ld is used for printing a long integer 
printf ("The reversed number is %ld\n", revnum);
return 0;
}*/


