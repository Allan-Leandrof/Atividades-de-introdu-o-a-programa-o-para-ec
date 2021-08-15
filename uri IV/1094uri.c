#include <stdio.h>

int main() {
    int testes;
    float totalCobais = 0, cobaia, sapo = 0, rato = 0, coelho = 0;
    float porcentagemSapo, porcentagemRato, porcentagemCoelho;
    char tipo;

    scanf("%d", &testes);

    while(testes--) {
        scanf("%f %c", &cobaia, &tipo);

        if(tipo == 'C') {
            coelho += cobaia;

        }else if(tipo == 'R') {
            rato += cobaia;

        }else if(tipo == 'S') {
            sapo += cobaia;

        }

        totalCobais += cobaia;

    }

    porcentagemCoelho = (coelho / totalCobais) * 100;
    porcentagemRato = (rato / totalCobais) * 100;
    porcentagemSapo = (sapo / totalCobais) * 100;

    printf("Total: %.f cobaias\n", totalCobais);
    printf("Total de coelhos: %.f\n", coelho);
    printf("Total de ratos: %.f\n", rato);
    printf("Total de sapos: %.f\n", sapo);
    printf("Percentual de coelhos: %.2f %\n", porcentagemCoelho);
    printf("Percentual de ratos: %.2f %\n", porcentagemRato);
    printf("Percentual de sapos: %.2f %\n", porcentagemSapo);

    return 0;
}
