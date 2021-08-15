/**
==========================================================================
 Problema:  1520 - Gerando o E-mail
 Autor:     Allan Leandro Fernandes
==========================================================================
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void GeraEmail(const char *nome, char *email){
    int i, j = 0;
    char acad[101];


    email[0] = '\0';
    for(i = 0; i < strlen(nome); i++){
        tolower(nome[i]);
    }
    for (i = 0; i < strlen(nome) - 1; i++){
        if (i == 0 || (nome[i - 1] == ' ' && nome[i] != ' ' && nome[i - 2] != ' ')){
            acad[j] = nome[i];
            j++;
        }
    }
    strcpy(email, acad);
    strcat(email, "@academico.ufpb.br");
}

int main(void){
    char nome[101], email[101];

    fgets(nome, 101, stdin);
    GeraEmail(nome, email);
    puts(email);

    return 0;
}
