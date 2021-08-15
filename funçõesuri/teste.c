#include <stdio.h>

int TermoUltimo(long long int n){
    long long int contador, y = 1, j = 0;
    int i = 2;

    if (n == 0){ 
        return 0;

    }else if (n == 1){
        return 1;

    }else if (n == 2){
        return 1;

    }else{
        while (i++ <= n){
            contador = y + j;
            j = y;
            y = contador; 
        }

        return contador;
    }
}
 
int main(){
    long long int x, termo;
    int t;

    scanf("%d", &t);

    while (t--){
        scanf("%lld", &x);
        termo = TermoUltimo(x);

        printf("Fib(%lld) = %lld\n", x, termo);


    }
 
    return 0;
}