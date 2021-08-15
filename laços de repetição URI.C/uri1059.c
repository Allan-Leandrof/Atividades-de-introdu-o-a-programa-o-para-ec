#include <stdio.h>
 
int main() {
    int i;

    i = 0;
    while(i <= 100){
        i = i + 1;
        if(i % 2 == 0){
            printf("%d\n", i);
        }

    }
 
    return 0;
}