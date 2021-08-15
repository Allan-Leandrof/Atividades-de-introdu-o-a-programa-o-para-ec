#include <stdio.h>
#include <math.h>

int FuncaoRafael(int x, int y){
    return pow((3 * x), 2) + pow(y, 2);
}

int FuncaoBeto(int x, int y){
    return 2 * pow(x, 2) + pow((5 * y), 2);
}

int FuncaoCarlos(int x, int y){
    return -100 * x + pow(y, 3);
}
 
int main() {
    int n, x, y;

    scanf("%d", &n);

    while (n--){
        scanf("%d%d", &x, &y);

        if (FuncaoRafael(x, y) > FuncaoBeto(x, y) && FuncaoRafael(x, y) > FuncaoCarlos(x, y)){
            puts("Rafael ganhou");
            
        }else if (FuncaoBeto(x, y) > FuncaoRafael(x, y) && FuncaoBeto(x, y) > FuncaoCarlos(x, y)){
            puts("Beto ganhou");

        }else if (FuncaoCarlos(x, y) > FuncaoBeto(x, y) && FuncaoRafael(x, y) < FuncaoCarlos(x, y)){
            puts("Carlos ganhou");

        }
    }
 
    return 0;
}