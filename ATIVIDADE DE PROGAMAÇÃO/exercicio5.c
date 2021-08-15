#include <stdio.h>

int main(void){
    int totalDinheiro, resto, numero;


    printf("Informe a quantia em dinheiro: ");
    scanf("%d", &totalDinheiro);

    numero = totalDinheiro/100;
    resto = totalDinheiro % 100;

    printf("sera necessario %d notas de 100\n", numero);

    numero = resto/50;
    resto = resto%50;

    printf("sera necessario %d notas de 50\n", numero);

    numero = resto/20;
    resto = resto%20;

    printf("sera necesario %d notas de 20\n", numero);

    numero = resto/10;
    resto = resto%10;

    printf("sera necessario %d notas de 10\n", numero);

    numero = resto/5;
    resto = resto%5;

    printf("sera necessario %d notas de 5\n", numero);

    numero = resto/2;
    resto = resto%2;

    printf("sera necessario %d notas de 2\n", numero);

    numero = resto/1;
    resto = resto%1;

    printf("sera necessario %d notas 1\n", numero);




    return 0;
}
