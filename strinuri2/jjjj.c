#include <stdio.h>
#include <string.h>

int main(){
    int i, j = 0, tam;
    char str1[51], str2[51];

    scanf("%s", str1);    

    for(i = 0; str1[i]; i++){

        if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u'){

            str2[j] = str1[i];
            j++;
        }
    }
    str2[j] = '\0';
    tam = strlen(str2);

    for(i = 0, j = tam - 1; i < tam; i++, j--){

        if(str2[i] != str2[j]){
            printf("N\n");
            return 0;      
        }
    }
    printf("S\n");
    return 0;
}