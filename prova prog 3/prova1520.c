/**
==========================================================================
 Problema:  1520 - Gerando o E-mail
 Autor:     Allan Leandro Fernandes
==========================================================================
*/
#include <stdio.h>
#include <string.h>

void GeraEmail(const char *nome, char *email){
    int i, j = 0;       //As variável i percorrera dentro do for a string do array nome e a variável j pecorrera
                        //o array email para adicionar seus caracteres formando também uma string.
    for (i = 0; i < strlen(nome) - 1; i++){
        if (i == 0 || nome[i - 1] == ' '){     //Esse desvio vai ser acionado no inicio da string nome e quando o caractere anterior
            email[j] = nome[i];                //ao analisado no momento for um espaço. Assim, email[j] com j começando de zero 
            j++;                               //e sendo incrementado, recebera o caractere de nome[i].        

        }
    }
    email[j] = '\0';        //Após as iniciais que vão está no email é adicionado um \0 no próximo caractere para quando o strcat 
                            //for fazer a impressão no final do email não imprimir lixo de memória.
    strcat(email, "@academico.ufpb.br");
}

int main(void){
    char nome[101], email[101];

    fgets(nome, 101, stdin);
    GeraEmail(nome, email);
    puts(email);

    return 0;
}