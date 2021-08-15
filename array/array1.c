#include <stdio.h>

int main(void){
    int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, i, soma = 0;

    for (i = 0 ; i < 10 ; i++){
        printf("ar[%d] = %d\n", i, ar[i]);
    }

    for (i = 9 ; i >= 0 ; i--){
        printf("ar[%d] = %d\n", i, ar[i]);
    }

    printf("ar[%d] = %d\n", 4, ar[4]);

    for (i = 0 ; i < 10 ; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("ar[%d] = %d\n", i, ar[i]);
    }

    for (i = 0 ; i < 10 ; i++){
        soma += ar[i];
    }

    printf("Soma = %d", soma);


    return 0;
}