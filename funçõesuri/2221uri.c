#include <stdio.h>

int ValorGolpeDadriel(int ai, int di, int li, int bonus){
    if (li % 2 == 0){
        return (ai + di) / 2 + bonus;
    }else{
        return (ai + di) / 2;
    }
}

int ValorGolpeGuarte(int ai, int di, int li, int bonus){
    if (li % 2 == 0){
        return (ai + di) / 2 + bonus;
    }else{
        return (ai + di) / 2;
    }
}
 
int main() {
    int t, ai, di, li, bonus;
    int dadriel, guarte;

    scanf("%d", &t);

    while (t--){
        scanf("%d", &bonus);
        scanf("%d%d%d", &ai, &di, &li);

        dadriel = ValorGolpeDadriel(ai, di, li, bonus);

        scanf("%d%d%d", &ai, &di, &li);

        guarte = ValorGolpeGuarte(ai, di, li, bonus);

        if (dadriel > guarte){
            puts("Dabriel");

        }else if (dadriel < guarte){
            puts("Guarte");

        }else{
            puts("Empate");

        }
    }
 
    return 0;
}