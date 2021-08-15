#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c;
    float delta, xis1, xis2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;
    xis1 = ( -b + sqrt(delta) ) / (2*a);
    xis2 = ( -b - sqrt(delta) ) / (2*a);

    if(a == 0) {
        printf("a equacao de grau 2 nao possui raiz porque a = 0 \n");

        return 1;
    }else{
        if(delta < 0){
            printf("A equacao de grau 2 nao possui raizes \n");

            return 2;
        }else{
            if( delta == 0){
                printf(" A  equacao de grau 2 ira possuir apenas uma raiz que eh: %.2f \n", xis1);
            }else{
                printf("As raizes da equacao de grau 2 vao ser %.2f e %.2f \n", xis1, xis2);
            }

        }




    }


    return 0;
}
