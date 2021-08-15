#include <stdio.h>
 
int main() {
    int i;
    int n, x;

    scanf("%d", &n);

    i = 1;
    while (i <= n){
        scanf("%d", &x);
        i = i + 1;
        if (x % 2 == 0 && x > 0){
            printf("EVEN POSITIVE\n");
        }else if (x % 2 == 0 && x < 0){
            printf("EVEN NEGATIVE\n");
        }else if (x % 2 != 0 && x > 0){
            printf("ODD POSITIVE\n");
        }else if (x % 2 != 0 && x < 0){
            printf("ODD NEGATIVE\n");
        }else if (x == 0){
            printf("NULL\n");
        }
        
    }
    
 
    return 0;
}