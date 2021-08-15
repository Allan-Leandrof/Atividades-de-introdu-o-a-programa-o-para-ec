#include <stdio.h>
 
int main() {
    int n, anos, pa, pb;
    double g1, g2;

    scanf("%d", &n);

    while(n--) {
        scanf("%d%d%lf%lf", &pa, &pb, &g1, &g2);
        anos = 0;
        
        while(pa <= pb){
            anos++;
            pa *= (g1 / 100) + 1;
            pb *= (g2 / 100) + 1;
            printf("%d\n", pa);

            if(anos > 100) {
            printf("Mais de 1 seculo.\n");
            break;

            }
            
        }

        if(anos <= 100) {
            printf("%d anos\n", anos);

        }

    }

    return 0;
}