#include <stdio.h>
 
int main() {
    int c, i, j;
    char t;
    float m[12][12], soma = 0;

    scanf("%d %c", &c, &t);

    for (i = 0 ; i < 12 ; i++){
        for (j = 0 ; j < 12 ; j++){
            scanf("%f", &m[i][j]);
        }
    }

    for (i = 0 ; i < 12 ; i++){
        soma += m[i][c];

    }

    if (t == 'S'){
        printf("%.1f\n", soma);
    }else{
        printf("%.1f\n", soma/12);

    } 
 
    return 0;
}