/*
If cost price and selling price of an item is input through the keyboard,
 write a program to determine whether the seller has made protit or incurred loss.
 Also determine how much profit he made or loss he incurred.*/
 #include<stdio.h>
 int main(){
    float cp, sp;
    printf("enter cost price\n");
    scanf("%f",&cp);
    printf("enter selling price \n");
    scanf("%f", &sp);
    if(sp>cp){
        printf("profitable bussiness");
        float profit= sp-cp;
        printf("the net profit=Rs%f", profit);
    }
    else{
        if(cp==sp){
            printf("no profit no loss bussiness");
            printf("net profit is 0");
        }
        else{
            printf("loss making bussiness");
            float loss= cp-sp;
            printf("net loss is Rs.%f", loss);
        }
    }
    return 0;
 }
