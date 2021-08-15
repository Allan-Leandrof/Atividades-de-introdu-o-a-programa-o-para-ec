#include <stdio.h>
 
int main() {
    int i;
    int m, n, soma;

    m = 1;
    n = 1;
    while (m > 0 && n > 0){
        scanf("%d%d", &m, &n);
        soma = 0;

        if (m > n && m > 0 && n > 0){
            i = n;
            while (i <= m){
                printf("%d ", i);
                soma = soma + i;
                i = i + 1;
            }

            printf("Sum=%d\n", soma);
        
        }else if (m < n && m > 0 && n > 0){
            i = m;
            while (i <= n){
                printf("%d ", i);
                soma = soma + i;
                i = i + 1;
            }

            printf("Sum=%d\n", soma);

        }else if (m == n  && m > 0 && n > 0){
             i = m;
            while (i <= n){
                printf("%d ", i);
                soma = soma + i;
                i = i + 1;
            }

            printf("Sum=%d\n", soma);

        }
 
    }
        
 
    return 0;
}