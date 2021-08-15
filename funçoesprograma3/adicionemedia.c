#include <stdio.h>

double AdicioneNaMedia(double valor){
    static double somaValores = 0, quantValores = 1;
    double mediaAgora;

    mediaAgora = (somaValores + valor) / quantValores;
    somaValores += valor;
    quantValores++;

    return mediaAgora; 
}

int main(void){
    int numValores, i = 0;
    double valor, media;

    puts("-------CALCULA MEDIA DE VALORES-------");
    printf("Informe a quantos valores serao inseridos: ");
    scanf("%d", &numValores);

    while (i++ < numValores){
        printf("Insira um valor: ");
        scanf("%lf", &valor);
        media = AdicioneNaMedia(valor);
        
        if (i == numValores){
            printf("A media final eh: %.2lf\n", media);

        }else{
            printf("No momento a media eh: %.2lf\n", media);

        }
    }

    return 0;
}