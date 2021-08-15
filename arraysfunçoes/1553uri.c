#include <stdio.h>

int calculaRepeticoes(int ar[], int t, int k){
    int i, contador = 0, j, frequencia = 0;

    for (i = 0 ; i < n ; i++){
        for (j = i + 1 ; j < n ; j++){
            if (ar[j] == ar[i]){
                frequencia++;
                if ( frequencia == k){
                    contador++;
                }
            }
        }
    }

    return contador;
}
 
int main() {
    int n, k, i, m;

    while (scanf("%d%d", &n, &k)){
        if (n == 0 && k == 0){
            break;
        }

        for (i = 0 ; i < n ; i++){
            scanf("%d", &m[i]);

        }

        printf("%d\n", calculaRepeticoes(m, n, k));
    }
 
    return 0;
}