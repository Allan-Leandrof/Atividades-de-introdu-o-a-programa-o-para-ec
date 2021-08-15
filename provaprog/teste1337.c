/**
==========================================================================
 Problema:  1337 - Bolha decrescente
 Autor:     Allan Leandro Fernandes
==========================================================================
*/
#include <stdio.h>

//A função irá receber como parâmetros o array ar, a variável n e o endereço da variável troca.
//Serão declarados dentro da função a variável i que será usada no for, a variável trocado que determinara se os valores já estão ordenado ou não
//a variável aux que servirá para troca dos valores e a variável trocou que irá guarda quantas vezes o vetor foi pecorrido até ser ordenado.
void OrdenaArray(int ar[], int n, int *troca){
    int i, trocado = 0, aux, trocou = 0;
    while (1){                              //Esse é o metódo bolha que irá repetir o laço que pecorre o array, até os valores
        trocado = 0;                        //estarem totalmente ordenados em ordem decrescente.
        for (i = 0; i < n - 1; i++){        //O for irá pecorre todo array enquanto o if troca os valores os ordenando.
            if (ar[i] < ar[i + 1]){         //Quando o if dentro do for não for acionado o o laço será encerrado.
                aux = ar[i];              
                ar[i] = ar[i + 1];
                ar[i + 1] = aux;
                trocado = 1;

            }
        }
        trocou++;
        if (!trocado){
            break;
        }
    }

    *troca = trocou;    //O endereço de troca da main irá receber o valor de trocou.
}

int main() {
    int n, ar[100], i, troca;   //n representa o número de valores - ar vai guarda os valores digitados
                                //i vai ser usado no for para determina os valores - troca irá guarda o número de vezes que o vetor
    scanf("%d", &n);            //foi pecorrido.

    for (i = 0; i < n; i++){   //Esse for pecorrera os arrays dando valores que serão digitados.
        scanf("%d",  &ar[i]);
    }

    OrdenaArray(ar, n, &troca); //chamada da função para ordenar os valores digitados e determina o número de vezes que o array foi pecorrido.
    for (i = 0; i < n; i++){    //Esse for pecorrera todo array imprimindo os valores na tela
        if (i == n - 1){        //O if else irá determina o /n no último valor impresso
            printf("%d\n", ar[i]);
        }else{
            printf("%d ", ar[i]);
        }
    }

    printf("%d\n", troca);

    return 0;
}
