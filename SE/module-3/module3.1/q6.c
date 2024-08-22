/*
WAP to convert years into days and days into years

-days into years

#include <stdio.h>

int main() {
    float year;
    float days;
    
    printf("enter days : ");
    scanf("%f", &days);
    
    year = days / 365;
    printf("year : %.2f", year);
    
    return 0;
}

-years into days

#include <stdio.h>

int main() {
    float year;
    float days;
    
    printf("enter year : ");
    scanf("%f", &year);
    
    days = year * 365;
    printf("days : %.2f", days);
    
    return 0;
}
*/