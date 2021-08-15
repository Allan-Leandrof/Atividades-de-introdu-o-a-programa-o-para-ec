#include <stdio.h>

int main(void){
    int a, b;
    int permutaA, permutaB;

	/* a entrada de dados nao pode ser alterada */
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

	/* esse printf nao pode ser alterado nem removido. */
    printf("\nOs valores lidos para a e b foram: %d e %d\n", a, b);

    permutaA = b;
    permutaB = a;


	/* esse printf nao pode ser alterado nem removido e nada pode ser alterado apos ele. */
    printf("\nOs novos valores de a e b sao: %d e %d\n", permutaA, permutaB);

    return 0;
}
