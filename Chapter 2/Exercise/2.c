// aim to convert the cartition to polar coordinate
#include<stdio.h>
#include<math.h>
int main(){
    float x,y;
    float r, theta;
    printf("enter x co-ordinate; \n");
    scanf("%f",&x);
    printf("enter y co-ordinate; \n");
    scanf("%f",&y);
    r= sqrt(x*x+y*y);
    theta= atan(x/y);
    double result_degrees = theta * (180.0 / 3.141);
    printf("polar co-ordinate is (%f,%f)", r, result_degrees );
    
    return 0;
}