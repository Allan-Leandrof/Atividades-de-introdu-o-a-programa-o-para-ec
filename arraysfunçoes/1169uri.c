#include <stdio.h>
#include <math.h>

int main(){
    int n, i;
    
    scanf("%d", &n);

    int x[n];
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);

    }

    for(i = 0; i < n; i++){
        printf("%lld kg\n", (long long)(pow(2,x[i])/12000));

    }
    
    return 0;
}