// if angle is given find all trignometry ratio;
#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846
int main(){
    float angle;
    printf("enter the angle in degree; \n");
    scanf("%f", &angle);
    double rad= angle*PI/180;
    double value_sin;
    value_sin = sin(rad);
    double value_cos;
    value_cos = cos(rad);
    double value_tan;
    value_tan = tan(rad);
    double value_cosecant;
    value_cosecant = 1/value_sin;
    double value_secant;
    value_secant= 1/value_cos;
    double value_cot;
    value_cot= 1/ value_tan;
    printf("%.2lf. %.2lf, %.2lf, %.2lf, %.2lf, %.2lf", value_sin, value_cos, value_tan, value_cosecant, value_secant, value_cot);
    return 0;
}
/*
 Potential divide-by-zero errors
When sin(), cos(), or tan() is 0, division by zero will happen for cosecant, secant, or cotangent.
You should check before dividing.*/