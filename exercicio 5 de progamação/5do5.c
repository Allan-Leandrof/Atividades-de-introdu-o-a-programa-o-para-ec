#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, contador, tentativas;

	srand(time(NULL));
	correto = rand() % 100;
    contador = 0;
    tentativas = 5;

	palpite = -1;
	while (palpite != correto && tentativas != 0) {
        if(contador <= 5){
            printf("Adivinhe o numero: ");
            scanf("%d", &palpite);
            contador = contador + 1;
            tentativas = tentativas - 1;

                if (palpite > correto){
                puts("Palpite alto!");
                }else if (palpite < correto){
                puts("Palpite foi baixo!");
                }
            printf("Voce tem %d tentativas\n", tentativas);
        }
	}

    if(tentativas == 0){
        puts("Voce gastou todas as tentativas, por isso perdeu. :(");
    }else{
         puts("Voce acertou!");
    }

    printf("Foram dados %d palpite durante o jogo\n", contador);
	return 0;
}