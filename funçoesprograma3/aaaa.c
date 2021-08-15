#include <stdio.h>
#include <math.h>

int EhPrimoSN(int num){
    int i = 2, contador = 0;
    while (i < sqrt(num)){
        if (num % i == 0){
            contador += 1;
            break;
        }
    }
    return contador;
}

int main() {
    int n, num;

    scanf("%d", &n);

    while (n--){
        scanf("%d", &num);

        if (EhPrimoSN(num) == 1){
            puts("Prime");

        }else{
            puts("Note prime");
        }


    }

    return 0;
}
