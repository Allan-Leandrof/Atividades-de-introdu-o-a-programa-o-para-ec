/**
==========================================================================
 Problema:  1145 - O Maior é Par ou Ímpar?
 Autor:     Allan Leandro Fernandes
==========================================================================
*/
#include <stdio.h>

int main() {
    int resposta1; /*Para guarda os valores lidos para determinar se é pa ou pg*/
    int reResposta; /*Para guarda o valor anterior digitado pelo teclado*/
    int razao1 = 0; /*Razao de pa*/
    float razaopg1; /*Razao de pg*/
    float avaliador1 = 1; /*Para guarda o valor anterior digitado pelo teclado*/
    float razaopg2; /*Para guarda o valor da razap de pg, para depois ser avaliada no desvio condicional*/
    int pa = 2, pg = 2; /*Para guarda os termos de pa e pg*/
    int termos = 0; /*Para guarda todos os termos*/
    int i = 1, j = 1; /*Para usar nos laços while*/
    int razao2; /*Para guarda o valor da razap de pa, para depois ser avaliada no desvio condicional*/

    /*Esse while infinito será usado para repitir os scanf até ser inserido um valor negativo*/
    while(1) {

        /*Esse while será executado apenas duas vezes para ler os dois primeiros valores e dar a razao pa e pg*/
        while(i++ < 3) {
            scanf("%d", &resposta1);

            razao1 = resposta1 - razao1; /*A expressão que determina a razão pa*/
            razaopg1 = resposta1 / avaliador1;/*A expressão que determina a razão pg*/
            avaliador1 = resposta1; /*o antigo valor do scanf será guardado nessa variável para usar na próxima vez que for executado*/
            termos++; /*aqui ele irá incrementar 1 a cada repetição do laço*/

        }

        razao2 = razao1; /*A razao pa será guardada em outra variável*/
        razaopg2 = razaopg1; /*A razao pg será guardada em outra variável*/
        reResposta = resposta1; /*A resposta de pa será guardada em outra variável*/

        /*Esse while será executado apenas uma vezes para ler um valor e  avaliar as razões*/
        while(j++ < 2){
            scanf("%d", &resposta1);

            razao1 = resposta1 - reResposta;/*será mudada a variável que utilizou no início, pois essa guarda o antigo valor da resposta*/
            razaopg1 = resposta1 / avaliador1;
            avaliador1 = resposta1;

            reResposta = resposta1;
            termos++;

            /*O desvio condicional irá avaliar se os valores digitados são pa, pg ou ambos*/
            if(razao1 == razao2 && razaopg1 == razaopg2) {
                pa++;
                pg++;

            }else if(razao1 == razao2) {
                pa++;

            }else if(razaopg1 == razaopg2) {
            pg++;

            }
        }


        scanf("%d", &resposta1);

        /*Esse desvio condicional irá determinar que o laço seja encerrado caso for verdadeiro*/
        if (resposta1 < 0) {
            break;

        }


        razao1 = resposta1 - reResposta;
        razaopg1 = resposta1 / avaliador1;
        avaliador1 = resposta1;

        /*O desvio condicional irá avaliar se os valores digitados são pa, pg ou ambos*/
        if(razao1 == razao2 && razaopg1 == razaopg2) {
            pa++;
            pg++;

        }else if(razao1 == razao2) {
            pa++;

        }else if(razaopg1 == razaopg2) {
            pg++;

        }

        termos++; /*aqui ele irá incrementar 1 a cada repetição do laço*/

    }

    /*O desvio irá avaliar se os valores digitados formam uma pa,pg, ambas ou uma sequência*/
    if(pa > pg && pa == termos) {
        printf("PA com %d termos e razao %d.\n", pa, razao1);

    }else if(pg > pa && pg == termos) {
        printf("PG com %d termos e razao %.f.\n", pg, razaopg1);

    }else if(pa == pg && pa == termos && pg == termos) {
        printf("PA com %d termos e razao %d.\n", pa, razao1);
        printf("PG com %d termos e razao %.f.\n", pg, razaopg1);

    }else {
        printf("Sequencia com %d termos.\n", termos);

    }
    return 0;
}
