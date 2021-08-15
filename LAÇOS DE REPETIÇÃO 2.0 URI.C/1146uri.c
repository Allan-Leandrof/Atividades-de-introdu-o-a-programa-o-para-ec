#include <stdio.h>
 
int main() {
    int x = 1, i;

    while(x > 0){
        scanf("%d", &x);
        i = 1;
        
        while(i <= x){
            if(i < x){
                printf("%d ", i);
            }else{
                printf("%d\n", i);
            }
            i += 1;
        }

    }
 
    return 0;
}