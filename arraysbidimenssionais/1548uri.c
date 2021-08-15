#include <stdio.h>
 
int main() {
    int n, i, contador, not[1000], copia[1000], m, troca, aux;

    scanf("%d", &n);

    while (n--){
        scanf("%d", &m);
        contador = 0;

        for (i = 0 ; i < m ; i++){
            scanf("%d", &not[i]);
            copia[i] = not[i];
        }

        while (1){
            troca = 0;

            for (i = 0 ; i < m - 1 ; i++){
                if (not[i] < not[i + 1]){
                    aux = not[i];
                    not[i] = not[i + 1];
                    not[i + 1] = aux;
                    troca = 1;

                }
            }
            if (!troca){
                break;
            }
        }

        for (i = 0 ; i < m ; i++){
            if (copia[i] == not[i]){
                contador++;
            }
        }

        printf("%d\n", contador);
    }
 
    return 0;
}