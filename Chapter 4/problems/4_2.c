// a- small 
// A- capital
// 1- digit
// @- special symbol
#include <stdio.h>

int main(){
    

    char value;
    printf("Enter the value \n");
    scanf("%c", &value);
    int ascii;
    ascii= value;
    if(ascii<=90 && ascii >=65){
        printf("The value entered is capital");

    }
    else if(ascii<=122 && ascii >=97){
        printf("The value entered is small case");

    }
    else if(ascii<=57 && ascii >=48){
        printf("The value entered is digit");

    }else {
        printf("The value entered is a special character\n");
    }
    return 0;
}
/*
Capital letters (65-90)

Small letters (97-122)

Digits (48-57)

is a special character, including symbols like !, @, #, etc.*/