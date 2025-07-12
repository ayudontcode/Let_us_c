// AIM to find the aggregate marks, percentage, and grade of 5 students in 3 subjects.
#include<stdio.h>
int main(){
    int physics,
    chemistry, 
    maths;
    int total_marks = 300;
    // marks obtained by Ravi
    printf("Enter marks obtained by Ravi in Physics out of 100 , Chemistry out of 100, and Maths out of 100: ");
    scanf("%d %d %d", &physics, &chemistry, &maths);
    int ravi_total = physics + chemistry + maths;
    float ravi_percentage = (float)ravi_total / total_marks * 100;
    // marks obtained by Sita
    printf("Enter marks obtained by Sita in Physics out of 100, Chemistry out of 100, and Maths out of 100: ");
    scanf("%d %d %d", &physics, &chemistry, &maths);
    int sita_total = physics + chemistry + maths;
    float sita_percentage = (float)sita_total / total_marks * 100;
    // marks obtained by Gita
    printf("Enter marks obtained by Gita in Physics out of 100, Chemistry out of 100, and Maths out of 100: ");
    scanf("%d %d %d", &physics, &chemistry, &maths);
    int gita_total = physics + chemistry + maths;
    float gita_percentage = (float)gita_total / total_marks * 100;
    // marks obtained by Raju
    printf("Enter marks obtained by Raju in Physics out of 100, Chemistry out of 100, and Maths out of 100: ");
    scanf("%d %d %d", &physics, &chemistry, &maths);
    int raju_total = physics + chemistry + maths;
    float raju_percentage = (float)raju_total / total_marks * 100;
    // marks obtained by Meena
    printf("Enter marks obtained by Meena in Physics out of 100, Chemistry out of 100, and Maths out of 100: ");
    scanf("%d %d %d", &physics, &chemistry, &maths);
    int meena_total = physics + chemistry + maths;
    float meena_percentage = (float)meena_total / total_marks * 100;
    // Displaying results
    printf("\nResults:\n");
    printf("Ravi: Total = %d, Percentage = %.2f%%\n", ravi_total, ravi_percentage);
    printf("Sita: Total = %d, Percentage = %.2f%%\n", sita_total, sita_percentage);
    printf("Gita: Total = %d, Percentage = %.2f%%\n", gita_total, gita_percentage);
    printf("Raju: Total = %d, Percentage = %.2f%%\n", raju_total, raju_percentage);
    printf("Meena: Total = %d, Percentage = %.2f%%\n", meena_total, meena_percentage);
    return 0;
}