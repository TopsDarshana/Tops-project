/*
WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end);

int main() {
    char str[100];
   
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
   
    str[strcspn(str, "\n")] = '\0';
    
    int length = strlen(str);
    
    printf("Reversed string: ");
    reverseString(str, 0, length - 1);
    printf("\n", reverseString);
    
    return 0;
}

void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
   
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
   
    reverseString(str, start + 1, end - 1);
}

*/