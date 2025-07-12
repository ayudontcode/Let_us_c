//  1/2 * |x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)| 
// there points are collinier implies the area formed by tingle is zero
// slope should be equal
#include <stdio.h>
#include<math.h>

int main(){
    float x1,x2,y1, y2, x3,y3;
    printf("enter x1 \n");
    scanf("%f",&x1);
    printf("enter x2 \n");
    scanf("%f",&x2);
    printf("enter y1 \n");
    scanf("%f",&y1);
    printf("enter y2 \n");
    scanf("%f",&y2);
    printf("enter x3 \n");
    scanf("%f",&x3);
    printf("enter x4 \n");
    scanf("%f",&y3);
    int area;
    area = 0.5 * fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    if (area==0){
        printf("the point is collnier");
    }
    else {
        printf("point is not colliner");
    }
}