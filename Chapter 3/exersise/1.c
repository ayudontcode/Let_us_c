 // 54321 to 12345 and determine wether entered vallue and reversed value is eqal or not
 #include<stdio.h>
 int main(){
    int value;
    printf("enter five digit number; \n");
    scanf("%d",&value);
    int reversed_value;
    
        int previous_value= value;
        int one, ten, hen , tho, ten_tho;
        one= value/10000; //54321/10000=5
        value= value%10000;// 4321
        ten= value/1000;// 4
        value= value%1000;//321
        hen= value/100; // 3
        value= value%100; //21
        tho= value/10; //2
        value= value%10; //1
        ten_tho= value/1; //1
        value= value%1;// 0
        reversed_value= ten_tho*10000+tho*1000+hen*100+ten*10+one*1;
        printf("the value %d is reversed to %d\n", previous_value, reversed_value);
    
    
    if(previous_value == reversed_value){
        printf("The value remains same on reversing.\n");
    }
    else{
        printf("The value does not remain same on reversing.\n");
    }
    


    
    return 0;
 }