#include <stdio.h>


int main(void){
    int a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);

    if(a<b) {
       printf("%d eh o menor\n", a);
    }else{
        if(a>b) {
            printf("%d eh o menor\n", b);
        }else{
            if(a==b) {
                printf("%d eh o menor\n", a);
            }
        }

    }





    return 0;
}
