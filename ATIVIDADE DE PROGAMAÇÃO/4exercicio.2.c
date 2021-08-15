#include <stdio.h>


int main(void){
    char sexo;
    float altura;
    float pesoIdealH, pesoIdealM;

    printf("Se seu sexo for masculino digite 1, feminino digite 2: ");
    scanf("%c", &sexo);
    printf("digite sua altura: ");
    scanf("%f", &altura);

    pesoIdealH = (72.7 * altura) - 58;
    pesoIdealM = (62.1 * altura) - 44.7;

    if (sexo == 1) {
        printf("seu peso ideal eh: %.2f \n", pesoIdealH);
    }else{
        printf("seu peso ideal eh: %.2f \n", pesoIdealM);
    }




    return 0;
}

