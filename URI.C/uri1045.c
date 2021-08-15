#include <stdio.h>


int main(void) {
    double a, b , c , aa, bb;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (c < b && b > a) {
        aa = a;
        a = b;
        b = aa;

    }

    if (b < c && c > a) {
        aa = a;
        a = c;
        c = aa;
    }

    if (c > b) {
        bb = b;
        b = c;
        c = bb;
    }
    

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");

    }else if ( a*a == b*b + c*c ) {
        printf("TRIANGULO RETANGULO\n");

    }else if (a*a > b*b + c*c) {
        printf("TRIANGULO OBTUSANGULO\n");

    }else if (a*a < b*b + c*c) {
        printf("TRIANGULO ACUTANGULO\n");

    }

    if (a == b && b == c && a == c) {
        printf("TRIANGULO EQUILATERO\n");

    }else if ( a == b || a == c || b == c) {
        printf("TRIANGULO ISOSCELES\n");
    }



    return 0;
}
