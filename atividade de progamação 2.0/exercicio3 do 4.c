#include <stdio.h>

int main(void) {
    int a, b ;

    printf("digite o primeiro valor do intervalo: ");
    scanf("%d", &a);
    printf("digite o segundo valor do intervalo: ");
    scanf("%d", &b);

    if ( a <= b ) {
         while ( a <= b ) {
        printf("%d\n", a);
        a = a + 1;
        }
    }else if ( a >= b ) {
         while ( a >= b ) {
        printf("%d\n", b);
        b = b + 1;
        }
    }else{
         while ( a = b ) {
        printf("%d\n", a);
            }
    }


    return 0;
}
