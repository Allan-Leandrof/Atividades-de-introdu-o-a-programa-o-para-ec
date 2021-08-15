#include <stdio.h>
#include <math.h>

int main(void){
    char letra;
    float t1, r, n, tn, i;
    float soma;

    printf("Digite 'a' para obter a progessao aritmetrica ou 'g' para geometrica: ");
    scanf("%c", &letra);
    printf("Digite o primeiro termo da progressao: ");
    scanf("%f", &t1);
    printf("Informe a razao para progressao: ");
    scanf("%f", &r);
    printf("Digite o numero de termos da progressao: ");
    scanf("%f", &n);

    soma = 0;
    if(letra == 'a'){
        printf("Os termos da progressao aritmetrica serao: \n");
        for(i = 1 ; i <= n ; i = i + 1){
            tn = t1 + (i - 1)*r;
            printf("%.2f\n", tn);
            soma = soma + tn;
        }
    }else{
        printf("Os termos da progressao geometrica serao: \n");
        for(i = 1 ; i <= n ; i = i + 1){
            tn = t1 * pow(r, i - 1);
            printf("%.2f\n", tn);
            soma = soma + tn;
        }
    }

    printf("O valor da soma dos termos da progressao sera: %.2f\n", soma);
    return 0;
}