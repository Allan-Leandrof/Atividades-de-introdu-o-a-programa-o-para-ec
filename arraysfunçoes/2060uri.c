#include <stdio.h>

int calculaMultiplo(int ar[], int n, int x){
    int i, contador = 0;

    for (i= 0 ; i < n ; i++){
        if (ar[i] % x == 0){
            contador++;
        }
    }

    return contador;
}
 
int main() {
    int n, i;

    scanf("%d", &n);

    int ar[n];

    for (i = 0 ; i < n ; i++){
        scanf("%d", &ar[i]);

    }

    printf("%d Multiplo(s) de 2\n", calculaMultiplo(ar, n, 2));
    printf("%d Multiplo(s) de 3\n", calculaMultiplo(ar, n, 3));
    printf("%d Multiplo(s) de 4\n", calculaMultiplo(ar, n, 4));
    printf("%d Multiplo(s) de 5\n", calculaMultiplo(ar, n, 5));
    
 
    return 0;
}