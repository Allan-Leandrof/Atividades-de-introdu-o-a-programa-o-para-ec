#include <stdio.h>

int main (void){

    int par, impar, positivo, negativo;
    int n, i;

    par = impar = positivo = negativo = 0;

    for(i=1; i<=5; i++){
        scanf("%d", &n);

        if(n % 2 == 0) par++;
        else if(n % 2 != 0) impar++;
        if(n >= 0) positivo++;
        if(n < 0) negativo++;
    }   
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

return 0;
}