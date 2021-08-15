#include <stdio.h>


int main(void){
    int a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o primeiro valor: ");
    scanf("%d", &b);
    printf("Digite o primeiro valor: ");
    scanf("%d", &c);

    if(a>b) {
        if(a>c){
            printf("%d eh o maior valor \n", a);
        }
    }else{
        if(b>c) {
            printf("%d eh o maior valor \n", b);
        }else{
            printf("%d eh o maior valor \n", c);
        }
    }


    return 0;
}
