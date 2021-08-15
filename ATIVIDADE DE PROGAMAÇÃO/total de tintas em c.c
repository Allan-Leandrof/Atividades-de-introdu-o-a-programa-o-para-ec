#include <stdio.h>

int main(void){
    float altura, comprimento, rendimento, volume;
    float totalLatas;

    printf("insira o valor da altura em metros: ");
    scanf("%f", &altura);
    printf("insira o valor do comprimento em metros: ");
    scanf("%f", &comprimento);
    printf("insira o rendimento da lata de tinta em metros quadrados por litro: ");
    scanf("%f", &rendimento);
    printf("insira o volume da lata em litros: ");
    scanf("%f", &volume);

    totalLatas = (altura*comprimento)/(volume*rendimento);

    printf("a quantidade total de latas de tinta para pintar esta parede sera de: %.2f", totalLatas);



    return 0;
}
