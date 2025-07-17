//gender   year of service  qualification  salary
/* male    >=10              phd            11000
           >=10              graduate       10000
           <10               phd            10000
           <10               graduate       7000
   female  >=10              phd            12000
           >=10              graduate       9000
           <10               phd            10000
           <10               graduate        6000*/
#include <stdio.h>

int main(){
    char gender, qualification;
    int year_of_experience, salary;
    printf("ENTER GENDER (M FOR MALE F FOR FEMALE), YEAR OF SERVICE,QUALIFICATION (B OR P)\n");
    scanf("%c %d %c ", &gender , &year_of_experience, &qualification);
    if((gender== 'M' && year_of_experience>=10 && qualification== 'p')){
        printf("salary is 11000");
    }
    else if ((gender== 'M' && year_of_experience>=10 && qualification== 'g')||gender== 'M' && year_of_experience<10 && qualification== 'P' )
    {
        printf("salary is 10000");
    }
    else if (gender== 'M' && year_of_experience<10 && qualification== 'G')
    {
        printf("salary is 7000");
    }
    else if (gender== 'F' && year_of_experience>=10 && qualification== 'P')
    {
        printf("salary is 12000");
    }
    else if (gender== 'F' && year_of_experience>=10 && qualification== 'G')
    {
        printf("salary is 9000");
    }
    else if (gender== 'F' && year_of_experience<10 && qualification== 'P')
    {
        printf("salary is 10000");
    }
    else if (gender== 'F' && year_of_experience<10 && qualification== 'G')
    {
        printf("salary is 6000");
    }
   else{
    printf("not eligible for salary");
    }
    return 0;
}