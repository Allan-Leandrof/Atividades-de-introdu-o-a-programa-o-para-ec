#include <stdio.h>

int RetornaString(const char *str, char c){
    int t = 0, i;

    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == c){
            t++;
        }
    }
    return t;
    
}

int ContaPalavras(const char *str, char c){
    int t = 1, i;

    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == c){
            if (str[i] == str[i + 1]){
                continue;
            }else{
                t++;
            }
        }
    }
    return t;
}

int main(void){
    char str[] = "Mugiwara e   luffy";

    printf("'%c' aparece %d vezes em %s\n", 'a', RetornaString(str, 'a'), str);
    printf("A string contem %d palavras\n",  ContaPalavras(str, ' '));

    return 0;
}