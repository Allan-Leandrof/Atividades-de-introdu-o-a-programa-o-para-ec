#include <stdio.h>
 
int main() {
    int i;
    int n, x, fora, dentro;

    scanf("%d", &n);

    i = 1;
    dentro = 0;
    fora = 0;
    while (i <= n){
        scanf("%d", &x);
        i = i + 1;

        if (x >= 10 && x <= 20){
            dentro = dentro + 1;
        }else {
            fora = fora + 1;
        } 

        
    }

    printf("%d in\n", dentro);
    printf("%d out\n", fora);
    
 
    return 0;
}