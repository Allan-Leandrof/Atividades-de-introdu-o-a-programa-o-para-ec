#include <stdio.h>
 
int main() {
    int x, i = 1, maior, posicao;

    scanf("%d", &x);

    maior = x;
    while(i < 100){
        scanf("%d", &x);
        i += 1;

        if(x > maior){
            maior = x;
            posicao = i;
        }

    }

    printf("%d\n", maior);
    printf("%d\n", posicao);
    return 0;
}