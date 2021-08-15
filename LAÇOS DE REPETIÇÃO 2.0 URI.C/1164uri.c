#include <stdio.h>
 
int main() {
    int n, x, i = 1, j, soma;

    scanf("%d", &n);
    
    if(n >= 1 && n <= 20){
        while(i <= n){
            scanf("%d", &x);
            i += 1;
            soma = 0;
            j = 1;
            while(j < x){
                if(x % j == 0){
                    soma += j;

                }

                j += 1;
            }


            if(soma == x){
                printf("%d eh perfeito\n", x);

            }else{
                printf("%d nao eh perfeito\n", x);
            }
                
            
        }
    }
    
 
    return 0;
}