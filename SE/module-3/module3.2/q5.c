/*
Looping programs:

1. WAP to print 972 to 897 using for loop 

#include <stdio.h>

int main() {
   int i;
   
   for(i = 972; i >= 897; i--){
       printf("%d\n", i);
   }
    return 0;
}

2. WAP to take 10 no. Input from user and find out

#include <stdio.h>

int main() {
    int numbers[10];
    
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
     
    }

    return 0;
}


#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
   
        sum += numbers[i];
    }
        printf("Sum: %d\n", sum);


    return 0;
}

3. How many Even numbers are there

#include <stdio.h>

int main() {
    int numbers[10];
    int evennum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
        
        if (numbers[i] % 2 == 0) {
            evennum++; 
        }
    }

    printf("Number of even numbers: %d\n", evennum);

    return 0;
}

4. How many odd numbers are there 

#include <stdio.h>

int main() {
    int numbers[10];
    int oddnum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
        
        if (numbers[i] % 2 != 0) {
            oddnum++; 
        }
    }

    printf("Number of odd numbers: %d\n", oddnum);

    return 0;
}

5. Sum of even numbers  

#include <stdio.h>

int main() {
    int numbers[10];
    int evennum = 0;
    int sum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
        
        if (numbers[i] % 2 == 0) {
            evennum++;
            sum += numbers[i]; // Add the actual odd number to the sum
        }
    }

    printf("Number of odd numbers: %d\n", evennum);
    printf("Sum of even numbers: %d\n", sum);

    return 0;
}

6. Sum of odd numbers  

#include <stdio.h>

int main() {
    int numbers[10];
    int oddnum = 0;
    int sum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
        
        if (numbers[i] % 2 != 0) {
            oddnum++;
            sum += numbers[i]; // Add the actual odd number to the sum
        }
    }

    printf("Number of odd numbers: %d\n", oddnum);
    printf("Sum of odd numbers: %d\n", sum);

    return 0;
}

*/