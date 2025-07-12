// to convert the degrees in nautical miles
// D=3963 cos^ -1 ( sin L*1 sin*L2+cosL1*cosL2 * cos(G2-G1)
#include<math.h>
#include<stdio.h>
#define PI 3.14159265358979323846
int main(){
    float l1, l2, g1,g2;
    printf("enter value of latitude in degree(l1); \n");
    scanf("%f",&l1);
    printf("enter value of latitude in degree(l2); \n");
    scanf("%f",&l2);
    printf("enter value of longitude in degree(g1); \n");
    scanf("%f",&g1);
    printf("enter value of longitude in degree(g2); \n");
    scanf("%f",&g2);
    // Convert degrees to radians
    l1 = l1 * (PI / 180);
    l2 = l2 * (PI / 180);
    g1 = g1 * (PI / 180);
    g2 = g2 * (PI / 180);
    double D;
    D=3963* acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1) );
    printf("the distance in nautical miles is D= %.2lf\n", D); 
    
    
    return 0;
}
