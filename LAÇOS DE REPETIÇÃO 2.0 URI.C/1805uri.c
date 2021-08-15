#include <stdio.h>
 
int main() {
    int a, b, soma = 0;

    scanf("%d%d", &a, &b);

    if(a >= 1 && a <= b){
        while(a <= b){
            soma += a;
            a+= 1;

        }

        printf("%d", soma);
    }
    return 0;
}