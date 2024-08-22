/*
Write a program of structure for five employee that provides the following 
information -print and display empno, empname, address and age  

#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    char address[100];
    int age; 
};

int main() {
    struct employee e1, e2, e3, e4, e5;

    strcpy(e1.name, "Vivek");
    strcpy(e1.address, "Surat");
    e1.age = 18;
   
    printf("Employee no.1 information:\n");
    printf("Name : %s\n", e1.name);
    printf("Address : %s\n", e1.address);
    printf("Age : %d\n", e1.age);
    
    strcpy(e2.name, "Fenil");
    strcpy(e2.address, "Surat");
    e2.age = 19;
    
    printf("Employee no.2 information:\n");
    printf("Name : %s\n", e2.name);
    printf("Address : %s\n", e2.address);
    printf("Age : %d\n", e2.age);
    
    strcpy(e3.name, "Harshil");
    strcpy(e3.address, "Surat");
    e3.age = 20;
   
    printf("Employee no.3 information:\n");
    printf("Name : %s\n", e3.name);
    printf("Address : %s\n", e3.address);
    printf("Age : %d\n", e3.age);
    
    strcpy(e4.name, "Dinal");
    strcpy(e4.address, "Surat");
    e4.age = 21;
    
    printf("Employee no.4 information:\n");
    printf("Name : %s\n", e4.name);
    printf("Address : %s\n", e4.address);
    printf("Age : %d\n", e4.age);
    
    strcpy(e5.name, "Disha");
    strcpy(e5.address, "Surat");
    e5.age = 22;
   
    printf("Employee no.5 information:\n");
    printf("Name : %s\n", e5.name);
    printf("Address : %s\n", e5.address);
    printf("Age : %d\n", e5.age);

    return 0;
}


*/