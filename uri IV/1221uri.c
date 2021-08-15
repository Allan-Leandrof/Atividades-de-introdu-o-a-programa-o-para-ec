#include <stdio.h>
#include <math.h>

int main() {
    int n, x, i = 1, contador, j, fim;

    scanf("%d", &n);

    while(i++ <= n){
        scanf("%d", &x);
        contador = 0;
        j = 2;
        fim = sqrt(x);

        while(j <= fim){
            if(x % j == 0){
            contador += 1;
            break;
            }
            j += 1;

            if(contador == 1){
                break;
            }
           
        }

        if(contador == 1){
            printf("Not Prime\n", x);
        }else { 
            printf("Prime\n", x);
        }

    }

    return 0;
}
