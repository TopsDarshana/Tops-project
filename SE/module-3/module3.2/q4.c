/*
WAP to show  
1. Monday to Sunday using switch case  
2. Vowel or Consonant using switch case

ANS - 

1. Monday to Sunday using switch case-

#include <stdio.h>

//0- MON, 1- TUES, 2- WED, 4-THURE, 5- FRI, 6- SAT, 7- SUN
int main() {
    int day;
    printf("enter day : ");
    scanf("%d", &day);
    
   switch(day){
       case 0:
       printf("Today is Monday");
       break;
       case 1:
       printf("Today is Tuesday");
       break;
       case 2:
       printf("Today is Wednesday");
       break;
       case 3:
       printf("Today is Thursday");
       break;
       case 4:
       printf("Today is Friday");
       break;
       case 5:
       printf("Today is Saturday");
       break;
       case 6:
       printf("Today is Sunday");
       break;
       default:
       printf("Invalid number");
   }
    
    return 0;
}

2. Vowel or Consonant using switch case-

#include <stdio.h>

int main() {
    char alphabete;
    printf("Enter a alphabete: ");
    scanf(" %c", &alphabete); 

    switch (alphabete) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("It is a vowel.\n");
            break;
        default:
            printf("It is a Consonant\n");
            break;
    }

    return 0;
}

*/