#include <stdio.h>

int main(void){
    int i, n, contador;

    printf("digite o numero: ");
    scanf("%d", &n);

    i = 1;
    contador = 0;
    while (i <= n){
        if (n % i == 0){
            contador = contador + 1;
        }

        i = i + 1;
    }

    if ( contador == 2){
        printf("%d Eh primo\n", n);
    }else{
        printf("%d nao eh primo\n", n);
    }
    
    
    return 0;
}