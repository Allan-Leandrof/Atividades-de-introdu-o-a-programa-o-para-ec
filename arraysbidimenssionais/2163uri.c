#include <stdio.h>

int main() {
    int n, m, i, j, linhas = 0, colunas = 0;

    scanf("%d%d", &n, &m);

    int des[n][m];

    for (i = 0 ; i < n ; i++){
        for (j = 0 ; j < m ; j++){
            scanf("%d", &des[i][j]);

        }
    }

    for (i = 1 ; i < n - 1 ; i++){
        for (j = 1 ; j < m - 1 ; j++){
            if (des[i][j] == 42){
                if (des[i - 1][j - 1] == 7 && des[i - 1][j] == 7 && des[i - 1][j + 1] == 7 && des[i][j - 1] == 7
                && des[i][j + 1] == 7 && des[i + 1][j - 1] == 7 && des[i + 1][j] == 7 && des[i + 1][j + 1] == 7){
                    linhas = i + 1;
                    colunas = j + 1;
                }
            }

        }
    }

    printf("%d %d\n", linhas, colunas);
    return 0;
}
