#include <stdio.h>
 
int main() {
    int l, i, j;
    char t;
    float m[12][12], soma = 0;

    scanf("%d %c", &l, &t);

    for (i = 0 ; i < 12 ; i++){
        for (j = 0 ; j < 12 ; j++){
            scanf("%f", &m[i][j]);
        }
    }

    for (i = 0 ; i < 12 ; i++){
        soma += m[l][i];

    }

    if (t == 'S'){
        printf("%.1f\n", soma);
    }else{
        printf("%.1f\n", soma/12);

    } 
 
    return 0;
}