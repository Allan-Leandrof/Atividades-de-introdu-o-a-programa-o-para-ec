#include <stdio.h>


int main(void){
    float peso, altura;
    float imc;

    printf("Digite o peso em kg da pessoa: ");
    scanf("%f", &peso);
    printf("Digite a altura da mesma em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc <= 18.5){
        printf("Essa pessoa esta com baixo peso");
    }else if(imc <= 25){
        printf("Essa pessoa esta com o peso normal");
    }else if(imc <= 30){
        printf("Essa pessoa esta com sobrepeso");
    }else if(imc > 30){
        printf("Essa pessoa esta em estado de obesidade");
    }



    return 0;
}
