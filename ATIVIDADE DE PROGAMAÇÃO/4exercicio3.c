#include <stdio.h>


int main(void){
        float a, b;

        printf("Digite o primeiro valor: ");
        scanf("%f", &a);
        printf("Digite o segundo valor: ");
        scanf("%f", &b);

        if(a == b) {
            printf("%.2f eh igual %.2f \n", a,b);
        }else{
            if(a<b) {
                printf("%.2f eh menor", a);
            }else{
                printf("%.2f eh menor", b);
            }
        }




    return 0;
}
