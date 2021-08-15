/**
==========================================================================
 Problema:  1331 - Mínimo e Máximo em um Vetor
 Autor:     Allan Leandro Fernandes
==========================================================================
*/
#include <stdio.h>

//A função irá receber como parâmetro o array ar, número de elementos n e os endereços de min e max da main.
//Na função é declarada uma variável i para usar nos for que pecorrerão o array.
//Também é declarado uma variável menor que atrvés do if dentro do for que pecorre todo array, determina o menor valor do conjunto.
//É declarado uma variável maior que atrvés do if dentro do for que pecorre todo array, determina o maior valor do conjunto.
void MaiorMenor(int ar[], int n, int *min, int *max){
    int i, menor = ar[0], maior = ar[0];

    for (i = 1; i < n; i++){
        if (menor > ar[i]){
            menor = ar[i];
        }
    }

    for (i = 1; i < n; i++){
        if (maior < ar[i]){
            maior = ar[i];
        }
    }

    *min = menor;       //Ela irá determina os valores máximo e mínimo do conjunto nos endereços de max e min.
    *max = maior;
}

int main(void){
    int ar[100];
    int n, i, min, max;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    MaiorMenor(ar, n, &min, &max);
    printf("%d %d\n", min, max);

    return 0;
}