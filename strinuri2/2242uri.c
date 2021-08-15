#include <stdio.h>
#include <string.h>

int main(){
    int i, tamanho, j = 0;
    char ris[51], ris2[51];

    scanf("%s", ris);  

    for(i = 0; ris[i]; i++){
        if(ris[i] == 'a' || ris[i] == 'e' || ris[i] == 'i' || ris[i] == 'o' || ris[i] == 'u'){
            ris2[j] = ris[i];
            j++;
        }

    }

    ris2[j] = '\0';

    tamanho = strlen(ris2);
    for(i = 0, j = tamanho - 1; i < tamanho; i++, j--){
        if(ris2[i] != ris2[j]){
            printf("N\n");
            return 1;      
        }
    }
    printf("S\n");
    return 0;
}