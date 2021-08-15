#include <stdio.h>
 
int main() {
    int n, i = 0, a = 0, b = 1, c = 0, condicao;

    scanf("%d", &n);

    condicao = n;
    while( i++ < n) {
        if(i%2==1) {
            if(i == condicao){
                printf("%d\n",c);
                c = a + b;
                a = c;
            }else {
                printf("%d ",c);
                c = a + b;
                a = c;
            }
       
        }else if(i==2) { 
            if(i == condicao) {
                printf("%d\n",c);
            }else {
                printf("%d ",c);
            }

        }else if(i%2==0) {
            if(i == condicao){
                printf("%d\n",c);
                c = a + b;
                b = c;
            }else {
                printf("%d ",c);
                c = a + b;
                b = c;
            }
        }
    }
     
    return 0;
}