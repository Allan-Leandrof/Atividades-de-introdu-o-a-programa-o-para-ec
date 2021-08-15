#include <stdio.h>

int main(void){
    int i;

    for(i = 1 ; i <= 200 ; i = i + 1){
        if( i % 2 == 0){
            puts("-Quem nao escreve progamas nao aprende a progamar.");
        }else{
            puts("-So aprende a progamar quem escreve progamas.");
        }
        
    }
    return 0;
}