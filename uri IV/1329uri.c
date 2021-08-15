#include <stdio.h>
 
int main() {
    int n, i, maria, resultado;

    while(1) {
        scanf("%d", &n);

        if(n == 0) {
            break;
        }

        i = 1;
        maria = 0;

        while(i++ <= n) {
            scanf("%d", &resultado);

            if(resultado == 0){
                maria++;
            }
        }

        printf("Mary won %d times and John won %d times\n", maria, n - maria);       

    }

 
    return 0;
}