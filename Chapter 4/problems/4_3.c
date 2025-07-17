// a<b+c, a,b,c are of side triangle in which a is the largest side.
#include <stdio.h>

int main(){
    float a, b, c;
    printf("enter lenth of each sides of triangle");
    scanf("%f %f %f", &a, &b, &c);
    if (a>b && a>c){
        if(a<b+c){
            printf("a,b,c forms a triangle");
        }
       else{
        printf("a,b,c do not form a triangle");
    } 
    }
    else if (b>a && b>c){
        if(b<a+c){
            printf("a,b,c forms a triangle");
        }
        else{
        printf("a,b,c do not form a triangle");
    }
    }
    else if (c>b && c>a){
        if(c<b+a){
            printf("a,b,c forms a triangle");
        }
        else{
        printf("a,b,c do not form a triangle");
    }
    }
    else{
        printf("a,b,c do not form a triangle");
    }
    return 0;
}