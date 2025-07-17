// insurace only when driver is unmaried female and above 25 or male above 30 and unmaried
#include <stdio.h>

int main(){
    int age;
    char sex, ms;
    printf("enter age in numirals\n sex male as m female as f \n married as m and unmaried as u\n ");
    printf(" enter age, sex, ms(maritial status)\n ");

    scanf("%d %c %c", &age, &sex, &ms);
    if((ms=='u' && sex=='f' && age>25) || (ms=='u' &&  sex== 'm' && age>30)){
        printf("insurace can be claimed");
    }
    else {
        printf("can not be claimed");
    }
    return 0;
}
