#include <stdio.h>


int main() {
    int n, i, troca;
    int livr[1000], aux;

    while (scanf("%d", &n) != EOF){
        for (i = 0; i < n; i++){
            scanf("%d", &livr[i]);

        }

        while (1){
            troca = 0;
            for (i = 0; i < n - 1; i++){
                if (livr[i] > livr[i + 1]){
                    aux = livr[i];
                    livr[i] = livr[i + 1];
                    livr[i + 1] = aux;
                    troca = 1;
                }


            }

            if (!troca){
                break;
            }
        }

        for (i = 0; i < n; i++){
            if (livr[i] < 10){
                printf("000%d\n", livr[i]);
            }else if(livr[i] < 100){
                printf("00%d\n", livr[i]);
            }else if (livr[i] < 1000){
                printf("0%d\n", livr[i]);
            }else{
                printf("%d\n", livr[i]);
            }

        }
    }



    return 0;
}
