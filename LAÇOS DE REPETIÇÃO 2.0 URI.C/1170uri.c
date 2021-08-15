#include <stdio.h>
 
int main() {
    int n, dias, i = 1;
    float kg;

    scanf("%d", &n);

    while(i <= n){
        scanf("%f", &kg);
        dias = 0;
        i += 1;

        while(kg > 1){
            kg /= 2;
            dias += 1;

        }

        printf("%d dias\n", dias);
    }
 
    return 0;
}