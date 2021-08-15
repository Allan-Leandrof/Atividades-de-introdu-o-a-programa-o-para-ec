#include <stdio.h>
 
int main() {
    int n, i, a, b;
    int pontosA, pontosB;

    while(1) {
        scanf("%d", &n);

        if(n == 0){
            break;
        }

        i = 1;
        pontosA = 0;
        pontosB = 0;

        while(i++ <= n) {
            scanf("%d%d", &a, &b);

            if(a > b) {
                pontosA++;

            }else if(b > a) {
                pontosB++;

            }
            
        }

        printf("%d %d\n", pontosA, pontosB);
        
    }
 
    return 0;
}