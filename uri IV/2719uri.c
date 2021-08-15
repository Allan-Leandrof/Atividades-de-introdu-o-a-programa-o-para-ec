#include <stdio.h>
 
int main() {
    int t, n, m, i;
    int pi, pesoTotal, viagem;

    scanf("%d", &t);

    while(t--) {
        scanf("%d%d", &n, &m);
        pesoTotal = 0;
        viagem = 1;
        i = 1;

        while(i++ <= n) {
            scanf("%d", &pi);
            pesoTotal += pi;

            if(pesoTotal > m) {
                viagem++;
                pesoTotal = pi;
            }

        }

        printf("%d\n", viagem);

    }

    
 
    return 0;
}