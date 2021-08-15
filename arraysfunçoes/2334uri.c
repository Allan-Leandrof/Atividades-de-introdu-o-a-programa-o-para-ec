#include <stdio.h>
 
int main() {
    int n[10000000], i = 0, patinhos[100000000], j;

    while (1){
        scanf("%d", &n[i]);

        if (n == -1){
            break;
        }

        patinhos[i] = n[i] - 1;

        i++;
    }

    for(j = 0 ; j < i; j++){
        printf("%d\n", patinhos[j]);
    }
 
    return 0;
}