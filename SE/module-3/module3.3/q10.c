/*
Write a program of structure employee that provides the following 
information -print and display empno, empname, address and age 

#include <stdio.h>
#include <string.h>

struct emp {
    char name[100];
    char address[100];
    int age; 
};

int main() {
    
    struct emp employee;

    strcpy(employee.name, "Darshana");
    strcpy(employee.address, "surat");
    employee.age = 22;

    printf("Employee information:\n");
    printf("Name : %s\n", employee.name);
    printf("Address : %s\n", employee.address);
    printf("Age : %d\n", employee.age);

    return 0;
}
*/