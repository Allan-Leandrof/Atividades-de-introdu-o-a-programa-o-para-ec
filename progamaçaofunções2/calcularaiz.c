#include <stdio.h>
#include <math.h>

float Delta(float a, float b, float c){
    return pow(b, 2) - 4 * a * c;
}

float RaizX1(float a, float b, float c, float delta){
   return (-(b) + sqrt(delta)) / (2 * a);
}

float RaizX2(float a, float b, float c, float delta){
    return (-(b) - sqrt(delta)) / (2 * a);
}


int main(void){
    float a, b, c, delta, x1, x2;

    puts("--------Calcula Raiz /Eq.Polinomial 2 Grau--------");
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0){
        puts("Os coeficientes nao formam raizes.");
        return 1;

    }else{
        delta = Delta(a, b, c);

        if (delta < 0){
            puts("Nao existe raiz para essa equacao.");
            return 2;

        }else if (delta == 0){
            x1 = RaizX1(a, b, c, delta);
            printf("A equacao forma apenas uma raiz: X = %.2f\n", x1);

        }else{
            x1 = RaizX1(a, b, c, delta);
            x2 = RaizX2(a, b, c, delta);
            printf("A equacao forma duas raizes: X1 = %.2f / X2 = %.2f\n", x1, x2);

        }
    }
    

    return 0;
}