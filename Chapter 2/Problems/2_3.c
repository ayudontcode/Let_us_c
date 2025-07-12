// Aim the smallest number of notes that will combine to give N notes when RS1, RS2, RS5, RS10, RS 50, RS 100 notes are accetable
// Eg Rs 51 needs RS 50 one note and RS 1 one note
#include<stdio.h>
#include<math.h>
int main(){
    int amount;// eg amount is 51
    printf("ENter the amount; \n");
    scanf("%d",&amount);
    int nohun, nofifty, noten, nofive, notwo, noone, total;
    nohun = amount / 100; // int nohun= 51/100 = 0.51 as integer it gives 0
    amount = amount % 100;// amount is modified to amount modulas 100 that is 51
    nofifty = amount / 50;// int nofifty=51/50=1.02 as integer it gives 1
    amount = amount % 50;// amount is modified to 1
    noten = amount / 10; // int noten=1/10=0.1 as integer it gives 0
    amount = amount % 10;// amount is modified to 1
    nofive = amount / 5;// int nofive=1/5=0.2 as integer 0
    amount = amount % 5;// amount is modified to 1
    notwo = amount / 2;//int notwo=1/2= 0.5
    amount = amount % 2;// amount is modified to 1
    noone = amount / 1;// int noone=1/1=1 as integer it gives 1
    amount = amount % 1;// amount is modified to zero
    total = nohun + nofifty + noten + nofive + notwo + noone;
    printf ("Smallest number of notes = %d\n", total);
    return 0;
    
}
