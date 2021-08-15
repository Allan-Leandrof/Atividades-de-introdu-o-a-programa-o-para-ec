#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, quantDisp, quantCompra;
    float preco[50], quant[50], totalGasto;
    char dispon[50][50], comprad[50][50];

    scanf("%d", &n);

    while (n--){
        scanf("%d", &quantDisp);
        for (i = 0; i < quantDisp; i++){
            scanf("%s", dispon[i]);
            scanf("%f", &preco[i]);

        }
        scanf("%d", &quantCompra);
        for (i = 0; i < quantCompra; i++){
            scanf("%s", comprad[i]);
            scanf("%f", &quant[i]);

        }


        totalGasto = 0;
        for (i = 0; i < quantCompra; i++){
            for (j = 0; j < quantDisp; j++){
                if(strcmp(comprad[i],dispon[j]) == 0){
                    totalGasto += (quant[i] * preco[j]);
                }
            }
        }

        printf("R$ %.2f\n", totalGasto);
    }

    return 0;
}
