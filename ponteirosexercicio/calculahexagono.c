#include <stdio.h>
#include <math.h>

void CalculaHexagono(float l, float *area, float *perimetro){
    *area = (3 * pow(l, 2) * sqrt(3)) / 2;
    *perimetro = 6 * l;
}

int main(void){
    float lado, area, perimetro;

    puts("-------------<<< Calcula Hexagono >>>-------------");
    puts("");
    printf("Digite o comprimento lateral do hexagono: ");
    scanf("%f", &lado);

    CalculaHexagono(lado, &area, &perimetro);
    printf("A area do hexagono eh: %.2f\n", area);
    printf("O perimetro do hexagono eh: %.2f\n", perimetro);

    return 0;
}