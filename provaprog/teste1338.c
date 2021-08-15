
==========================================================================
 Problema:  1338 - Jogo da Velha
 Autor:     Allan Leandro Fernandes
==========================================================================
*/

#include <stdio.h>

//A função recebe como parâmetros o array bidimensional ar e o número número de linhas do array da função main.
//É declarado na função a variável l que irá pecorrer as linhas e colunas do array através do for.
char Resultado(char ar[][3], int t){
   int l;
    for (l = 0; l < t; l++){        //Esse for irá pecorrer todas as linhas do array ar para quando a condição de um dos if for verdadeira a função retorna 'X' ou 'O'.
        if (ar[l][0] == 'X' && ar[l][1] == 'X' && ar[l][2] == 'X') return 'X';  
        if (ar[l][0] == 'O' && ar[l][1] == 'O' && ar[l][2] == 'O') return 'O';
    }

    for (l = 0; l < t; l++){        //Esse for irá pecorrer todas as colunas do array ar para quando a condição de um dos if for verdadeira a função retorna 'X' ou 'O'.
        if (ar[0][l] == 'X' && ar[1][l] == 'X' && ar[2][l] == 'X') return 'X';
        if (ar[0][l] == 'O' && ar[1][l] == 'O' && ar[2][l] == 'O') return 'O';
    }

    if (ar[0][0] == 'X' && ar[1][1] == 'X' && ar[2][2] == 'X') return 'X';  //Esses if quando algum for verdadeiro determinará se o 'X' ou 'O' ganhou pelas diagonais
    if (ar[0][0] == 'O' && ar[1][1] == 'O' && ar[2][2] == 'O') return 'O';  //retornando 'X' ou 'O'.
    if (ar[0][2] == 'X' && ar[1][1] == 'X' && ar[2][0] == 'X') return 'X';
    if (ar[0][2] == 'O' && ar[1][1] == 'O' && ar[2][0] == 'O') return 'O';

    return 'v'; //Quando nenhum dos desvios for acionado significa que o jogo deu empate, então será retornado 'V'.
}

int main() {
    char ar[3][3], i, j;               //O array bidimensional guarda os carcteres digitados - O i e o j serão usados nos for que pecorrerão o array.

    for (i = 0; i < 3; i++){                //Os dois for determinarão a linha e coluna do ar que vai receber o caractere.
        for (j = 0; j < 3; j++){
            if (j == 2){                    //Esse desvio if else determinara o último caractere de cada linha para pular linha ou não.
                scanf("%c%*c", &ar[i][j]);  
            }else{
                scanf("%c", &ar[i][j]);
            }

        }
    }

    if (Resultado(ar, 3) == 'v'){               //Esse desvio determinara se será impresso velha e o jogo ficou empatado
        puts("Velha");                          //A função Resultado é chamada para isso.
    }else{
        printf("%c\n", Resultado(ar, 3));       //O printf imprime o retorno da função que quando chegar nesse else só pode ser
    }                                           //'X' ou 'O'.
    return 0;
}
