#include <stdio.h>

int main() {
    int n, x, i = 1, contador, j;

    scanf("%d", &n);

    while(i <= n){
        scanf("%d", &x);
        i += 1;
        contador = 0;
        j = 1;

        while(j <= x){
            if(x % j == 0){
            contador += 1;
            }
            j += 1;
        }

        if(contador == 2){
            printf("%d eh primo\n", x);
        }else{
            printf("%d nao eh primo\n", x);
        }

    }

    return 0;
}
