#include <stdio.h>
#include <math.h>

int EhTrianguloRetanuglo(float a, float b, float c){
    if (pow(a, 2) + pow(b, 2) == pow(c, 2)){
        return 1;

    }else{
        return 0;

    }
}

float FormaTrianguloRetangulo(float a, float b, float c){
    if (a <= 0 && b > 0 && c > 0){
        return sqrt(pow(c, 2) - pow(b, 2));

    }else if (b <= 0 && a > 0 && c > 0){
        return sqrt(pow(c, 2) - pow(a, 2));

    }else if (c <= 0 && a > 0 && b > 0){
        return sqrt(pow(a, 2) + pow(b, 2));

    }else{
        return -1;

    }
}

int main(void){
    float a, b, c;

    puts("--------------Verifica Triangulo Retangulo--------------");
    puts("");
    printf("Digite o valor do cateto a: ");
    scanf("%f", &a);
    printf("Digite o valor do cateto b: ");
    scanf("%f", &b);
    printf("Digite o valor da hipotenusa: ");
    scanf("%f", &c);

    if (a > 0 && b > 0 && c > 0){
        if (EhTrianguloRetanuglo(a, b, c)){
            puts("Os lados formam um triangulo retangulo.");

        }else{
            puts("Os lados nao formam um triangulo retangulo.");

        }
    }else if (a <= 0 && b > 0 && c > 0){
        printf("Para forma triangulo retangulo o cateto 'a' tem que ser igual a: %.2f\n", FormaTrianguloRetangulo(a, b, c));

    }else if (a > 0 && b <= 0 && c > 0){
        printf("Para forma triangulo retangulo o cateto 'b' tem que ser igual a: %.2f\n", FormaTrianguloRetangulo(a, b, c));

    }else if (a > 0 && b > 0 && c <= 0){
        printf("Para forma triangulo retangulo a 'hipotenusa' tem que ser igual a: %.2f\n", FormaTrianguloRetangulo(a, b, c));

    }else if (FormaTrianguloRetangulo(a, b, c) == -1){
        puts("A entrada eh invalida / Os lados nao formam triangulo retangulo. ");

    }
    c = pow(a, 2) + pow(b, 2);
    printf("%f", c);

    return 0;
}
