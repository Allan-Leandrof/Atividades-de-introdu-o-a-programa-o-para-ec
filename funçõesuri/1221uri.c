#include <stdio.h>
#include <math.h>

int EhPrimoSN(int num){
    int i = 2, contador = 0, fim;

    fim = sqrt(num);
    while (i <= fim){
        if (num % i == 0){
            contador += 1;
            break;
        }
        i++;
    }
    return contador;
}
 
int main() {
    int n, num;

    scanf("%d", &n);

    while (n--){
        scanf("%d", &num);

        if (EhPrimoSN(num) == 1){
            puts("Not Prime");

        }else{
            puts("Prime");
        }


    }
 
    return 0;
}