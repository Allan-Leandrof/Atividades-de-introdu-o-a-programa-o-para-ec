#include <stdio.h>
#include <string.h>
 
int main() {
    int te, i = 0;
    char raj[9], sheld[9];
    char p[] = "pedra", pp[] = "papel", t[] = "tesoura", l[] = "lagarto", s[] = "Spock";

    scanf("%d ", &te);

    while (i++ < te){
        scanf("%s %s", sheld, raj);

        if (strcmp(raj, sheld) == 0){
            printf("Caso #%d: De novo!\n", i);

        }else if (strcmp(raj, p) == 0){
            if (strcmp(sheld, pp) == 0 || strcmp(sheld, s) == 0){
                printf("Caso #%d: Bazinga!\n", i);

            }else if (strcmp(sheld, l) == 0 || strcmp(sheld, t) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i);

            }
        }else if (strcmp(raj, pp) == 0){
            if (strcmp(sheld, t) == 0 || strcmp(sheld, l) == 0){
                printf("Caso #%d: Bazinga!\n", i);

            }else if (strcmp(sheld, p) == 0 || strcmp(sheld, s) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i);

            }
            
        }else if (strcmp(raj, t) == 0){
            if (strcmp(sheld, p) == 0 || strcmp(sheld, s) == 0){
                printf("Caso #%d: Bazinga!\n", i);

            }else if (strcmp(sheld, pp) == 0 || strcmp(sheld, l) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i);

            }
            
        }else if (strcmp(raj, l) == 0){
            if (strcmp(sheld, t) == 0 || strcmp(sheld, p) == 0){
                printf("Caso #%d: Bazinga!\n", i);

            }else if (strcmp(sheld, s) == 0 || strcmp(sheld, pp) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i);

            }
            
        }else if (strcmp(raj, s) == 0){
            if (strcmp(sheld, l) == 0 || strcmp(sheld, pp) == 0){
                printf("Caso #%d: Bazinga!\n", i);

            }else if (strcmp(sheld, p) == 0 || strcmp(sheld, t) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i);

            }
            
        }
    }
 
    return 0;
}