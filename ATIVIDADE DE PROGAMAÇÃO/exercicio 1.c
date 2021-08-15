#include <stdio.h>

int main(void){
    float diametro;
    float raio, area, perimetro;


    printf("Digite o valor do diametro do circulo: ");
    scanf("%f", &diametro);

    raio = diametro/ 2 ;

    printf("O raio do circulo sera: %.2f\n", raio);

    area = 3.14 * (raio * raio) ;

    printf("A area do circulo sera: %.2f\n", area);

    perimetro = 2 * 3.14 * raio ;

    printf("O perimetro do circulo sera: %.2f\n", perimetro);



    return 0;
}
