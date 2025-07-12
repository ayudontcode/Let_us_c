int main(){
    int year;
    int leap_years, ordinary_years, odd_days;

    printf("Enter the year: ");
    scanf("%d", &year);

    // Count number of leap years from year 1 to year-1
    leap_years = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    // Count number of ordinary years
    ordinary_years = (year - 1) - leap_years;

    // Calculate total odd days
    odd_days = (ordinary_years * 1 + leap_years * 2) % 7;

    // Print day using if-else
    printf("On 1st January %d it was: ", year);
    if(odd_days == 0){
        printf("Monday\n");
    }
    else if(odd_days == 1){
        printf("Tuesday\n");
    }
    else if(odd_days == 2){
        printf("Wednesday\n");    }    else if(odd_days == 3){        printf("Thursday\n");    }    else if(odd_days == 4){        printf("Friday\n");    }    else if(odd_days == 5){
        printf("Saturday\n");
    }
    else if(odd_days == 6){
       printf("Sunday\n");
    }

    return 0;
}