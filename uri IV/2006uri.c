#include <stdio.h>
 
int main() {
    int tipo, respostaCerta = 0;
    int resposta, i = 5;

    scanf("%d", &tipo);

    while(i--) {
        scanf("%d", &resposta);

        if(resposta == tipo) {
            respostaCerta += 1;
        }
    }

    printf("%d\n", respostaCerta);
 
    return 0;
}