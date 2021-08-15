/**
==========================================================================
 Problema:  1145 - O Maior é Par ou Ímpar?
 Autor:     Allan Leandro Fernandes
==========================================================================
*/

#include <stdio.h>
 
int main() {
    int a, b; 

    scanf("%d%d", &a, &b);

    if(a > b) {
        if(a % 2 == 0) {
            printf("A eh maior e PAR.\n");

        }else {
            printf("A eh maior e IMPAR.\n");

        }
        
    }else if( a < b) {
        if(b % 2 == 0) {
            printf("B eh maior e PAR.\n");

        }else {
            printf("B eh maior e IMPAR.\n");

        }

    }else {
        printf("A e B sao iguais.\n");
        
    }
 
    return 0;
}