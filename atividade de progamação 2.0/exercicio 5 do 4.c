#include <stdio.h>

int main(voi) {
    int a, menorV, maiorV, repetir;

    a = -1;
    menorV = 1000000000;
    maiorV = -100000000;
    while( a != 0 ) {
        printf("para encerrrar eh preciso digitar o valor: 0\n");
        printf("digite um valor inteiro: ");
        scanf("%d", &a);

       if ( a != 0 && a > maiorV ){
           maiorV = a;
       }
       if ( a != 0 && a < menorV ){
           menorV = a;
       }
    }

    printf(" O menor valor digitado foi: %d\n", menorV);
    printf(" O maior valor digitado foi: %d\n", maiorV);

    return 0;
}
