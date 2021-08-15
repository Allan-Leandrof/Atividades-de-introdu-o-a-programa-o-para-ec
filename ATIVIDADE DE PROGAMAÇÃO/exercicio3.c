#include <stdio.h>

int main(void){
    int b,h;
    float area;

    printf("digite o valor da base do triangulo: ");
    scanf("%d", &b);
    printf("digite o valor da altura do triangulo: ");
    scanf("%d", &h);

    area = (b*h) / 2.0 ;

    printf("A area desse triangulo sera: %.2f", area);




    return 0;
}
