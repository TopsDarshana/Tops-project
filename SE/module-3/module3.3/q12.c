/*

Structure - A struct (short for "structure") in C is a composite data type that groups together variables (called members) under a single name. Each member can be of a different data type, and the structure provides a way to store and manage these different types of data together.

ex - 
#include <stdio.h>
#include <string.h>
struct book {
    char name[100];
    int pages;
    float price; 
};

int main() {
    struct book b1, b2;
    strcpy(b1.name, "python");
    b1.pages = 349;
    b1.price = 360;
    
    printf("Book information:\n");
    printf("Name : %s\n", b1.name);
    printf("Pages : %d\n", b1.pages);
    printf("Price : %.2f\n", b1.price);
    
    strcpy(b2.name, "java");
    b2.pages = 549;
    b2.price = 560;
    
    printf("Book information:\n");
    printf("Name : %s\n", b2.name);
    printf("Pages : %d\n", b2.pages);
    printf("Price : %.2f\n", b2.price);

    return 0;
}


Union - In C, a union is a special data type that allows different types of data to be stored in the same memory location. Unlike structures, where each member has its own memory space, all members of a union share the same memory. This means that a union can hold only one of its members' values at a time.

ex - 
#include <stdio.h>
#include <string.h>
union book {
    char name[100];
    int pages;
    float price; 
};

int main() {
    union book b1, b2;
    strcpy(b1.name, "python");
    b1.pages = 349;
    b1.price = 360;
    
    printf("Book information:\n");
    printf("Name : %s\n", b1.name);
    printf("Pages : %d\n", b1.pages);
    printf("Price : %.2f\n", b1.price);
    
    strcpy(b2.name, "java");
    b2.pages = 549;
    b2.price = 560;
    
    printf("Book information:\n");
    printf("Name : %s\n", b2.name);
    printf("Pages : %d\n", b2.pages);
    printf("Price : %.2f\n", b2.price);

    return 0;
}
*/