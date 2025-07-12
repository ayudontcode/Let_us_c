// aim to build a programme tha help to calculate wind chill from the formula in which velocity of wind and temprature is input from  the user
// the formula is wcf = 35.74 + 0.6215*t + (0.4275t-35.75) * v^0.16
#include<stdio.h>
#include<math.h>
int main(){
    float t, v;
    printf("enter temprature; \n");
    scanf("%f",&t);
    printf("enter velocity; \n");
    scanf("%f", &v);
    double wcf;
    wcf= 35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("the wind chill factor is %.2lf°F", wcf);
    return 0;
}