/*
WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice

#include <stdio.h>

void bubble_sort_ascending(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubble_sort_descending(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size1, size2;
    int choice;
    
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    
    int array1[size1];
    
    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &array1[i]);
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    
    int array2[size2];
    
    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &array2[i]);
    }
    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        bubble_sort_ascending(array1, size1);
        printf("First array in ascending order: ");
    } else if (choice == 2) {
        bubble_sort_descending(array1, size1);
        printf("First array in descending order: ");
    } else {
        printf("Invalid choice.\n");
        return 1;
    }
    print_array(array1, size1);
    
    if (choice == 1) {
        bubble_sort_ascending(array2, size2);
        printf("Second array in ascending order: ");
    } else if (choice == 2) {
        bubble_sort_descending(array2, size2);
        printf("Second array in descending order: ");
    }
    print_array(array2, size2);
    
    return 0;
}


*/