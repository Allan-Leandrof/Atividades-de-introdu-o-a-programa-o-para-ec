#include <stdio.h>
 
int main() {
    int n, i = 1, fator = 1;

    scanf("%d", &n);

    while(i <= n){
        fator *= i;
        i += 1;

    }

    printf("%d\n", fator);
 
    return 0;
}