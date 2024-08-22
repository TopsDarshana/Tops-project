/*
WAP to print factorial of given number

#include <stdio.h>

int main() {
    int n;
    int fact = 1;
    printf("enter number : ");
    scanf("%d", &n);
    
    for(int i = n;i >= 1; i--){
        fact *= i;
    }
    
    printf("fact is : %d", fact);


    return 0;
}
*/