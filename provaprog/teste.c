/**
==========================================================================
 Problema:  1331 - Soma de Intervalos
 Autor:     Allan Leandro Fernandes
==========================================================================
*/
#include <stdio.h>

//A função recebe como parametros os valores de a e b da função main.
//Nela é declarado um array de 200 elementos que irá receber os valores do intervalo através de um for.
//Também é declarado a variável soma que irá contar os valores dentro do intervalo através de um for.
//A variável aux será usada quando o valor de a for maior que b dentro do if, para a troca dos valores de a e b.
//A função irá retorna a variável soma.
int SomaIntervalo(int a,int b){
    int ar[200], soma = 0, i, aux;

    if (a > b){
        aux = a;
        a = b;
        b = aux;
    
    }

    for (i = a; i <= b; i++){
        ar[i] = i;
    }

    for (i = a; i <= b ; i++){
        soma += ar[i];
    }

    return soma;
}

int main(void){
    int a, b, soma;

    scanf("%d %d", &a, &b);
    soma = SomaIntervalo(a, b);
    printf("%d\n", soma);

    return 0;
}