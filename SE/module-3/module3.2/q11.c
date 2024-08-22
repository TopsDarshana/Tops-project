/*
Write a program make a summation of given number (E.g., 1523 Ans: -11) 

ANS-

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;  
        sum += digit;     
        num /= 10;        
    }

    printf("Sum of the digits is: %d\n", sum);

    return 0;
}

*/