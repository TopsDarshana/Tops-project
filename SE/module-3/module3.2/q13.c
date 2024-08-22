/*
petterns - 

1)
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1

ans -

#include <stdio.h>

int main(){
    
    for(int row = 1; row <= 5; row += 1){
        for(int col = 1; col <= row; col += 1){
            if(col % 2 == 0){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }
}

2)
A 
A B 
A B C 
A B C D 
A B C D E 

ANS-
#include <stdio.h>

int main(){
    
    for(int row = 1; row <= 5; row += 1){
        for(int col = 1; col <= row; col += 1){
            if(col == 1){
                printf("A ");
            }else if (col == 2){
                printf("B ");
            }else if (col == 3){
                printf("C ");
            }else if (col == 4){
                printf("D ");
            }else if (col == 5){
                printf("E ");
            }
        }
        printf("\n");
    }
}

3)
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

ans-

#include <stdio.h>

int main(){
    
   int num = 1;
    
    for(int row = 1; row <= 5; row += 1){
        for(int col = 1; col <= row; col += 1){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

4)
A 
B C 
D E F 
G H I J 
K L M N O 

ANS-

#include <stdio.h>

void  main(){
    
    int alpha = 1;
    for(int row = 1; row <= 5; row += 1){
        for(int col = 1; col <= row; col += 1){
            printf("%c ", alpha+64);
            alpha++;
        }
        printf("\n");
    }
}

5)
        *           
      * * *         
    * * * * *       
  * * * * * * *   
* * * * * * * * *

ans-

#include <stdio.h>

int  main(){
   
    for(int row = 1; row <= 5; row += 1){
        for(int col = 5; col > row; col--){
            printf("  ");
        }
        for(int col = 1; col <= row; col += 1){
            printf("* ");
        }
        for(int col = 1; col < row; col += 1){
            printf("* ");
        }
        printf("\n");
    }
}

6)
*        
* *      
* * *    
* * * *      
* * * * *    
* * * *      
* * *        
* *         
*        

ans-
#include <stdio.h>

int main() {
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int row = 4; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/