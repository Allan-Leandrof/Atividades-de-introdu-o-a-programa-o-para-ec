/**
==========================================================================
 Problema:  1519 - String Verticalmente Inversa
 Autor:     Allan Leandro Fernandes
==========================================================================
*/
#include <stdio.h>
#include <string.h>

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main (void){
    char str[30];     //O array str irá guarda a string digitada pelo teclado - O inteiro i irá guarda o valor interiro que pecorrera
    int i;            // o for.  

    fgets(str, 30, stdin);      
    RemoveBarraN(str);      //Essa função irá remover o \n que o fgets adiciona no final da string.

    for (i = strlen(str) - 1; i >= 0; i--){     //Esse for irá pecorrer toda a string de trás para frente, com o i assumindo o valor
        printf("%c\n", str[i]);                 //retornado por strlen(que é o tamanho da string) menos 1 para não adicionar o \0
                                                //e sendo decrementado até ser menor que zero, e assim imprimindo na tela todos os
    }                                           //caracteres da string.

    return 0;
}