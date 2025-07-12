<<<<<<< HEAD
#include <stdio.h>

int main(){
    float m1,m2,m3,m4,m5;
    printf("enter marks in all subjects; \n");
    scanf("%f %f %f %f %f", &m1,&m2,&m3,&m4,&m5);
    float total_score=m1+m2+m3+m4+m5;
    float percentage = 500/total_score*100;
    if(percentage>=60){
        printf("first division");
    }
    else if(percentage<60 || percentage>=50){
        printf("second devision");
    }
    else if(percentage<50 || percentage>=40){
        printf("third devision");
    }
    else {
        printf("fail");
    }
}
=======
>>>>>>> b74454f672321139a6a8674c961ba4e9fb0d4d28
