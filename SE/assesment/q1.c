/*
Create menu driven calculator using function

#include <stdio.h>

int main() {
    int number;
    int num1, num2, result;
    char continueCalculation;

    do {
      
        printf("\n1 = Addition\n");
        printf("2 = Subtraction\n");
        printf("3 = Multiplication\n");
        printf("4 = Division\n");
        printf("Enter an operator number (1-4): ");
        scanf("%d", &number);  

        printf("Enter first number: ");
        scanf("%d", &num1);
        
        printf("Enter second number: ");
        scanf("%d", &num2);

        switch (number) {
            case 1:
                result = num1 + num2;
                printf("Result: %d\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %d\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %d\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %d\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator number.\n");
                break;
        }
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &continueCalculation);  

    } while (continueCalculation == 'y' || continueCalculation == 'Y');  

    printf("THANK YOU\n");

    return 0;
}

*/