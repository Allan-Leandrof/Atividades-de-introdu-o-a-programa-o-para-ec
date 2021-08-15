#include <stdio.h>
 
int main() {
    int i;
    int t, soma, r1, r2;

    scanf("%d", &t);

    i = 1;
    while (i <= t){
        scanf("%d%d", &r1, &r2);
        soma = r1 + r2;
        printf("%d\n", soma);
        i = i + 1;
    }
    
 
    return 0;
}