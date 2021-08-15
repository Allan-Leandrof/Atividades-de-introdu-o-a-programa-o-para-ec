#include <stdio.h>

int main(void){
    int i;

    i = -10;
    do{
        printf("%2d\n", i);
        i = i + 1;
    }while(i <= 10 && i >= -10);
    

    return 0;
}