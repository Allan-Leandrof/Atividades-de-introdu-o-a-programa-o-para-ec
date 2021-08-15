#include <stdio.h>

int RetornaString(const char *str){
    int t = 0, i;

    for (i = 0; str[i] != '\0'; i++){
        t++;
    }
    return t;
}

int main(void){
    char str[] = "Mugiwara";

    printf("%d\n", RetornaString(str));

    return 0;
}