#include <stdio.h>
#include <math.h>

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){
    if ( a == 0){
        return -1;

    }else if (pow(b, 2) - 4 * a * c < 0){
        return -2;

    }else{
        *x1 = (-(b) + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        *x2 = (-(b) - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

        return 0;
    }
}

int main(void){
    float a, b, c, x1, x2;

    puts("-------------<<< Calcula Eq - Polinomial Grau 2 >>>-------------");
    puts("");
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (ResolveEquacao2Grau(a, b, c, &x1, &x2) == -1){
        puts("");
        puts("Os coeficientes nao formam raizes.");

    }else if(ResolveEquacao2Grau(a, b, c, &x1, &x2) == -2){
        puts("");
        puts("A equacao nao possui raizes reais.");

    }else{
        ResolveEquacao2Grau(a, b, c, &x1, &x2);
        if (x1 == x2){
            puts("");
            printf("A equacao forma uma raiz real: X = %.2f", x1);

        }else{
            puts("");
            printf("A equacao forma duas raizes reais respectivamente: X1 = %.2f/ X2 = %.2f", x1, x2);

        }
    }

    return 0;
}