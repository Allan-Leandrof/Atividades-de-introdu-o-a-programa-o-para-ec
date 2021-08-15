#include <stdio.h>
 
int main() {
    char dn1[101], dn2[101];

    while (scanf("%s %s", dn1, dn2) != EOF){
        if ( strstr(dn1, dn2) == NULL){
            puts("Nao resistente");
        }else{
            puts("Resistente");

        }
    }
 
    return 0;
}