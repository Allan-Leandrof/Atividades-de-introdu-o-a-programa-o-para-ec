#include <stdio.h>
#include <string.h>
 
int main() {
    char frase[1010];
    int n, i, j, totalLetras;

    scanf("%d ", &n);

    while (n--){
        char alfab[27] = "abcdefghijklmnopqrstuvwxyz";

        fgets(frase, 1010, stdin);

        totalLetras = 0;
        for (i = 0; frase[i] != '\0'; i++){
            for (j = 0; alfab[j] != '\0'; j++){
                if (frase[i] == alfab[j]){
                    totalLetras++;
                    alfab[j] = 1;
                }
            }

        }

        if (totalLetras == 26){
            puts("frase completa");

        }else if (totalLetras >= 13){
            puts("frase quase completa");
            
        }else{
            puts("frase mal elaborada");
            
        }
    }
 
    return 0;
}