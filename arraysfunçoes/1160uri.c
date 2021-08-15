#include <stdio.h>

int calculaAnos(int pa, int pb, double g1, double g2){
    int contador = 0;

    while (pa <= pb){
        pa *= (g1/100) + 1;;
        pb *= (g2/100) + 1;

        contador++;

        if (contador > 100){
            return 0;
        }
    }

    return contador;
}

int main() {
    int n, pa, pb, i;
    double g1, g2;

    scanf("%d", &n);

    int anos[n];
    for (i = 0; i < n ; i++){
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        anos[i] = calculaAnos(pa, pb, g1, g2);
    }

    for (i = 0 ; i < n ; i++){
        if (anos[i] == 0){
            puts("Mais de 1 seculo.");

        }else{
            printf("%d anos.\n", anos[i]);

        }
    }

    return 0;
}
