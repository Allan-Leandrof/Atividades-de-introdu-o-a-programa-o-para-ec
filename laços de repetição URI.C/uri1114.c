#include <stdio.h>
 
int main() {
    int num1;

    scanf("%d", &num1);
    while(num1 != 2002){
        printf("Senha Invalida\n");
        scanf("%d", &num1);
    }

    printf("Acesso Permitido\n");
    
 
    return 0;
}