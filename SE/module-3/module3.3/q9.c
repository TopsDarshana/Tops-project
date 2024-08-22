/*
WAP to reverse a string and check that the string is palindrome or not 

#include <stdio.h>

void reverse_string(char str[], char reversed[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; 
}

int is_palindrome(char str[], char reversed[]) {
    int i = 0;
    while (str[i] != '\0' && reversed[i] != '\0') {
        if (str[i] != reversed[i]) {
            return 0; 
        }
        i++;
    }
    return 1; 
}

int main() {
    char str[100];
    char reversed[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    str[length] = '\0'; 
    reverse_string(str, reversed);
    
    printf("Reversed string: %s\n", reversed);
    
    if (is_palindrome(str, reversed)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}

*/