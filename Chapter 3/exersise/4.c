// programme to find a absolute value
#include<stdio.h>
int main(){
    float value;
    printf("enter the value \n");
    scanf("%f", &value);
    
    if(value>0){
        printf("absolute value is %.2lf", value);
    }
    else {
        value= -1*value;
        printf("the absolute value is %.2lf", value);
    }
    return 0;
}