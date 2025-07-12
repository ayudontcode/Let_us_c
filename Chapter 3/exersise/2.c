// ram, shyam, ajay age is input then find youngest among thee;
#include <stdio.h>

int main(){
    int age_ram, age_shyam, age_ajay;
    printf("enter age of shyam;\n");
    scanf("%d",&age_shyam);
    printf("enter age of ram;\n");
    scanf("%d",&age_ram);
    printf("enter age of ajay;\n ");
    scanf("%d",&age_ajay);
    if (age_ram<age_shyam && age_ram<age_ajay){
        printf("ram is youngest");
    }
    else if(age_shyam<age_ram && age_shyam< age_ajay)
    {
        printf("shyam is smallest");
    }
    else if (age_ajay<age_ram&& age_ajay<age_shyam)
    {
        printf("ajay is youngest");
    }
    else if (age_ajay== age_ram) {
        printf("ajay and ram have same age");
    }
    else if (age_ram==age_shyam){
        printf("shyam and ram have same age");
    }
    else if (age_ajay== age_shyam)
    {
        printf("ajay and shyam have same age");
    }
    else{
        printf("all are equal");
    }

    return 0;
}