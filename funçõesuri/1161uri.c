#include <stdio.h>

long long int SomaFatorial(long long int m, long long int n){
    long long int soma1 = 1, soma2 = 1, k, x;
    int i = 1;

    k = m;
    x = n;
    while (m--){
        soma1 *= k;
        k--;
    }
    while (n--){
        soma2 *= x;
        x--;
    }

    return soma1 + soma2;
}
 
int main() {
    long long int m, n, soma;

    while (scanf("%lld%lld", &m, &n) != EOF){
        printf("%lld\n", SomaFatorial(m,n));

    }
 
    return 0;
}