#include <stdio.h>
 
int main() {
    int n;
    char a1[21];

    scanf("%d ", &n);

    while (n--){
        scanf("%s", a1);
        
        if (strlen(a1) == 3 && a1[0] == 'U' && a1[1] == 'R'){
            printf("URI");
        }else if (strlen(a1) == 3 && a1[0] == 'O' && a1[1] == 'B'){
            printf("OBI");

        }else{
            printf("%s", a1);
        }

        if (n){
            printf(" ");
        }
    }

    printf("\n");
 
    return 0;
}