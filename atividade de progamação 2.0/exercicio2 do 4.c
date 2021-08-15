#include <stdio.h>

int main(void) {
    int i;

    i = 10;
    while( i >=1 && i <= 10 ) {
        printf("%d\n", i);
        i = i - 1;
    }

    return 0;
}