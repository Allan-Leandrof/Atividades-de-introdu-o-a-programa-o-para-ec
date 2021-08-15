#include <stdio.h>

int MediaArray(int ar[], int t){
    int i, soma = 0;

    for (i = 0 ; i < t ; i++){
        soma += ar[i];
    }

    return soma / t;
}

int EmArray(int ar[], int t, int procurado){
    int i;

    for (i = 0 ; i < t ; i++){
        if (procurado == ar[i]){
            return 1;
        }
    }

    return 0;
}

int main(void){
    int ar[10], i, soma = 0, t;

    for (i = 0 ; i < 10 ; i++){
        scanf("%d", &ar[i]);
    }

    for (i = 0 ; i < 10 ; i++){
        printf("ar[%d] = %d\n", i, ar[i]);
    }

    for (i = 9 ; i >= 0 ; i--){
        printf("ar[%d] = %d\n", i, ar[i]);
    }

    printf("ar[%d] = %d\n", 4, ar[4]);

    for (i = 0 ; i < 10 ; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("ar[%d] = %d\n", i, ar[i]);
    }

    for (i = 0 ; i < 10 ; i++){
        soma += ar[i];
    }

    printf("Soma = %d\n", soma);

    printf("Media = %d\n", MediaArray(ar, 10));

    scanf("%d", &t);

    if (EmArray(ar, 10, t)){
        puts("Esse valor pertence ao Array");

    }else{
        puts("Esse valor nao pertence ao Array");

    }


    return 0;
}