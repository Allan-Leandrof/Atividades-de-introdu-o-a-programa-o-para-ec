#include <stdio.h>

int RetornaString(const char *str, char c){
    int t = 0, i;

    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a'){
            t++;
        }
    }
    return t;
}

int main(void){
    char str[] = "Mugiwara";

    printf("'%c' aparece %d vezes em %s\n", 'a', RetornaString(str, 'a'), str);

    return 0;
}