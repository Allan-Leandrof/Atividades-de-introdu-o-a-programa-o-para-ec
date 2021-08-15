#include <stdio.h>

int main (void){
    int X, i = 1;

    scanf("%d", &X);

    while(i <= X){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
        i += 1;
    }
     

    return 0;
}