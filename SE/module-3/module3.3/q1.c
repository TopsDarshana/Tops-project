/*
Write a program to find out the max number from given array using function

#include<stdio.h>

int main() {
   int num[5],i;
   int max = 0;
   
   printf("enter elements\n");
   for(i = 0; i < 5; i++){
       scanf("%d", &num[i]);
       if(num[i]>max){
           max=num[i];
       }
   }
   printf("max = %d", max);
   
    return 0;
}

*/