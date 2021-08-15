#include <stdio.h>


int main(void){
    float peso, altura;
    float imc;

    printf("digite o peso: ");
    scanf("%f", &peso);
    printf("digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O imc desse corpo sera: %.4f\n", imc);





    return 0;
}
