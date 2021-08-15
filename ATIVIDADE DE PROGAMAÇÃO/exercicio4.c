#include <stdio.h>

int main(void){
    float media1, media2, media3, media4;
    float mediaPonderada;

    printf("Digite o valor da media do primeiro bimestre: ");
    scanf("%f", &media1);
    printf("Digite o valor da media do segundo bimestre: ");
    scanf("%f", &media2);
    printf("Digite o valor da media do terceiro bimestre: ");
    scanf("%f", &media3);
    printf("Digite o valor da media do quarto bimestre: ");
    scanf("%f", &media4);

    mediaPonderada = (1*media1 + 2*media2 + 3*media3 + 4*media4) / (1 + 2 + 3 + 4);

    printf("A media ponderada anual sera: %.2f", mediaPonderada);

    return 0;
}
