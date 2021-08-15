#include <stdio.h>

int main(void){
    float nota1, nota2, nota3;
    float media;

    printf("insira o valor da nota1: ");
    scanf("%f", &nota1);
    printf("insira o valor da nota2: ");
    scanf("%f", &nota2);
    printf("insira o valor da nota3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("sua media arirtmetica sera: %.1f", media);

    return 0;
}
