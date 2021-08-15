#include <stdio.h>

int main(void) {
    int i;

    i = -10;
    while (i <=10 && i >= -10) {
        printf("%2d\n", i);
        i = i + 1;
    }
    

    return 0;
}