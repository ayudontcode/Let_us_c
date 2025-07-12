// (x - h)² + (y - k)² = r
#include <stdio.h>
#include<math.h>

int main(){
    double h,k,r;
    double x,y;
    printf("enter the co-ordinate if center \n");
    scanf("%lf %lf" ,&h, &k);
    printf("enter radius of the circle \n");
    scanf("%lf",&r);
    printf("enter the co-ordinate whose loction we have to find with refrece to centre\n");
    scanf("%lf %lf" ,&x, &y);
    if (pow((x - h),2)+ pow((y - k),2)==pow(r,2))
    {
        printf("the point lie on the circle");
    }
    else if(fabs(pow((x - h),2)+ pow((y - k),2)-pow(r,2)<0.0001)){
        printf("the point lie in the circle");
    }
    else{
        printf("point lie outside the cicle");
    }
    
    return 0;
}