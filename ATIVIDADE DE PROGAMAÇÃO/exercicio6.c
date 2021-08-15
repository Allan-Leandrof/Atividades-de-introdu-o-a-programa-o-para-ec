#include <stdio.h>

int main(void){
    int segundo, hora, minuto,resto;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundo);

    hora = segundo / 3600;
    resto = segundo % 3600;

    printf("O tempo em horas sera: %d\n", hora);

    minuto = resto / 60;
    resto = resto % 60;

    printf("O tempo em minutos sera: %d\n", minuto);

    segundo = resto / 1;
    resto = resto % 1;

    printf("O tempo em segundos sera: %d\n", segundo);


    return 0;
}
