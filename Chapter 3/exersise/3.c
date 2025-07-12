// to check weather the given degree forms a tringle or not
#include <stdio.h>

int main(){
    int angle_1, angle_2, angle_3;
    printf("enter the angle 1 in degree \n ");
    scanf("%d", &angle_1 );
    printf("enter the angle 2 in degree \n ");
    scanf("%d", &angle_2 );
    printf("enter the angle 3 in degree \n ");
    scanf("%d", &angle_3 );
    if (angle_1>0 && angle_2>0 && angle_3>0 && angle_1+angle_2+angle_3==180)
    {
        printf("it is a triangle");
    }
    else{
        printf("it is not a triangle");
    }
    
    
    return 0;
}