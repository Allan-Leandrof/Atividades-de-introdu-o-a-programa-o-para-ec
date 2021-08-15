#include <stdio.h>


int main(void){
    float notaptUnidade1, notappUnidade1, notaptUnidade2, notappUnidade2, notaptUnidade3, notappUnidade3;
    float mediaPonderada1, mediaPonderada2, mediaPonderada3;
    float mediaSemestre;

    printf("Digite a nota pratica da unidade 1: ");
    scanf("%f", &notappUnidade1);
    printf("Digite a nota teorica da unidade 1: ");
    scanf("%f", &notaptUnidade1);
    printf("Digite a nota pratica da unidade 2: ");
    scanf("%f", &notappUnidade2);
    printf("Digite a nota teorica da unidade 2: ");
    scanf("%f", &notaptUnidade2);
    printf("Digite a nota pratica da unidade 3: ");
    scanf("%f", &notappUnidade3);
    printf("Digite a nota teorica da unidade 3: ");
    scanf("%f", &notaptUnidade3);

    if(notappUnidade1 == notaptUnidade1){
        mediaPonderada1 = (4 * notappUnidade1 + 6 * notaptUnidade1) / 10;
        if(mediaPonderada1 >= 9 && mediaPonderada1 <=10){
            printf("A nota da unidade 1 eh: A\n");
        }else if(mediaPonderada1 >= 8 && mediaPonderada1 < 9){
            printf("A nota da unidade 1 eh: B\n");
        }else if(mediaPonderada1 >= 7 && mediaPonderada1 < 8){
            printf("A nota da unidade 1 eh: C\n");
        }else if(mediaPonderada1 >= 6 && mediaPonderada1 < 7){
            printf("A nota da unidade 1 eh: D\n");
        }else if(mediaPonderada1 >= 5 && mediaPonderada1 < 6){
            printf("A nota da unidade 1 eh: E\n");
        }else if(mediaPonderada1 < 5){
            printf("A nota da unidade eh: F\n");
        }

    }

    if(notappUnidade1 > notaptUnidade1){
        mediaPonderada1 = (6 * notappUnidade1 + 4 * notaptUnidade1) / 10;
        if(mediaPonderada1 >= 9 && mediaPonderada1 <=10){
            printf("A nota da unidade 1 eh: A\n");
        }else if(mediaPonderada1 >= 8 && mediaPonderada1 < 9){
            printf("A nota da unidade 1 eh: B\n");
        }else if(mediaPonderada1 >= 7&& mediaPonderada1){
            printf("A nota da unidade 1 eh: C\n");
        }else if(mediaPonderada1 >= 6 && mediaPonderada1 < 7){
            printf("A nota da unidade 1 eh: D\n");
        }else if(mediaPonderada1 >= 5 && mediaPonderada1 < 6){
            printf("A nota da unidade 1 eh: E\n");
        }else if(mediaPonderada1 < 5){
            printf("A nota da unidade 1 eh: F\n");

            }

    }else if(notappUnidade1 < notaptUnidade1){
        mediaPonderada1 = (4 * notappUnidade1 + 6 * notaptUnidade1) / 10;
        if(mediaPonderada1 >= 9 && mediaPonderada1 <=10){
            printf("A nota da unidade 1 eh: A\n");
        }else if(mediaPonderada1 >= 8 && mediaPonderada1 < 9){
            printf("A nota da unidade 1 eh: B\n");
        }else if(mediaPonderada1 >= 7 && mediaPonderada1 < 8){
            printf("A nota da unidade 1 eh: C\n");
        }else if(mediaPonderada1 >= 6 && mediaPonderada1 < 7){
            printf("A nota da unidade 1 eh: D\n");
        }else if(mediaPonderada1 >= 5 && mediaPonderada1 < 6){
            printf("A nota da unidade 1 eh: E\n");
        }else if(mediaPonderada1 < 5){
            printf("A nota da unidade eh: F\n");
        }

    }

    if(notappUnidade2 == notaptUnidade2){
        mediaPonderada2 = (6 * notappUnidade2 + 4 * notaptUnidade2) / 10;
        if(mediaPonderada2 >= 9 && mediaPonderada2 <=10){
            printf("A nota da unidade 2 eh: A\n");
        }else if(mediaPonderada2 >= 8 && mediaPonderada2 < 9){
            printf("A nota da unidade 2 eh: B\n");
        }else if(mediaPonderada2 >= 7 && mediaPonderada2 < 8){
            printf("A nota da unidade 2 eh: C\n");
        }else if(mediaPonderada2 >= 6 && mediaPonderada2 < 7){
            printf("A nota da unidade 2 eh: D\n");
        }else if(mediaPonderada2 >= 5 && mediaPonderada2 < 6){
            printf("A nota da unidade 2 eh: E\n");
        }else if(mediaPonderada2 < 5){
            printf("A nota da unidade 2 eh: F\n");

            }

    }

     if(notappUnidade2 > notaptUnidade2){
        mediaPonderada2 = (6 * notappUnidade2 + 4 * notaptUnidade2) / 10;
        if(mediaPonderada2 >= 9 && mediaPonderada2 <=10){
            printf("A nota da unidade 2 eh: A\n");
        }else if(mediaPonderada2 >= 8 && mediaPonderada2 < 9){
            printf("A nota da unidade 2 eh: B\n");
        }else if(mediaPonderada2 >= 7 && mediaPonderada2 < 8){
            printf("A nota da unidade 2 eh: C\n");
        }else if(mediaPonderada2 >= 6 && mediaPonderada2 < 7){
            printf("A nota da unidade 2 eh: D\n");
        }else if(mediaPonderada2 >= 5 && mediaPonderada2 < 6){
            printf("A nota da unidade 2 eh: E\n");
        }else if(mediaPonderada2 < 5){
            printf("A nota da unidade 2 eh: F\n");

            }

    }else if(notappUnidade2 < notaptUnidade2){
        mediaPonderada2 = (4 * notappUnidade2 + 6 * notaptUnidade2) / 10;
        if(mediaPonderada2 >= 9 && mediaPonderada2 <=10){
            printf("A nota da unidade 2 eh: A\n");
        }else if(mediaPonderada2 >= 8 && mediaPonderada2 < 9){
            printf("A nota da unidade 2 eh: B\n");
        }else if(mediaPonderada2 >= 7 && mediaPonderada2 < 8){
            printf("A nota da unidade 2 eh: C\n");
        }else if(mediaPonderada2 >= 6 && mediaPonderada2 < 7){
            printf("A nota da unidade 2 eh: D\n");
        }else if(mediaPonderada2 >= 5 && mediaPonderada2 < 6){
            printf("A nota da unidade 2 eh: E\n");
        }else if(mediaPonderada2 < 5){
            printf("A nota da unidade eh: F\n");
        }
    }

     if(notappUnidade3 == notaptUnidade3){
        mediaPonderada3 = (6 * notappUnidade3 + 4 * notaptUnidade3) / 10;
        if(mediaPonderada3 >= 9 && mediaPonderada3 <=10){
            printf("A nota da unidade 3 eh: A\n");
        }else if(mediaPonderada3 >= 8 && mediaPonderada3 < 9){
            printf("A nota da unidade 3 eh: B\n");
        }else if(mediaPonderada3 >= 7 && mediaPonderada3 < 8){
            printf("A nota da unidade 3 eh: C\n");
        }else if(mediaPonderada3 >= 6 && mediaPonderada3 < 7){
            printf("A nota da unidade 3 eh: D\n");
        }else if(mediaPonderada3 >= 5 && mediaPonderada3 < 6){
            printf("A nota da unidade 3 eh: E\n");
        }else if(mediaPonderada3 < 5){
            printf("A nota da unidade 3 eh: F\n");

            }

    }

     if(notappUnidade3 > notaptUnidade3){
        mediaPonderada3 = (6 * notappUnidade3 + 4 * notaptUnidade3) / 10;
        if(mediaPonderada3 >= 9 && mediaPonderada3 <=10){
            printf("A nota da unidade 3 eh: A\n");
        }else if(mediaPonderada3 >= 8 && mediaPonderada3 < 9){
            printf("A nota da unidade 3 eh: B\n");
        }else if(mediaPonderada3 >= 7 && mediaPonderada3 < 8){
            printf("A nota da unidade 3 eh: C\n");
        }else if(mediaPonderada3 >= 6 && mediaPonderada3 < 7){
            printf("A nota da unidade 3 eh: D\n");
        }else if(mediaPonderada3 >= 5 && mediaPonderada3 < 6){
            printf("A nota da unidade 3 eh: E\n");
        }else if(mediaPonderada3 < 5){
            printf("A nota da unidade 3 eh: F\n");

            }

    }else if(notappUnidade3 < notaptUnidade3){
        mediaPonderada3 = (4 * notappUnidade3 + 6 * notaptUnidade3) / 10;
        if(mediaPonderada3 >= 9 && mediaPonderada3 <=10){
            printf("A nota da unidade 3 eh: A\n");
        }else if(mediaPonderada3 >= 8 && mediaPonderada3 < 9){
            printf("A nota da unidade 3 eh: B\n");
        }else if(mediaPonderada3 >= 7 && mediaPonderada3 < 8){
            printf("A nota da unidade 3 eh: C\n");
        }else if(mediaPonderada3 >= 6 && mediaPonderada3 < 7){
            printf("A nota da unidade 3 eh: D\n");
        }else if(mediaPonderada3 >= 5 && mediaPonderada3 < 6){
            printf("A nota da unidade 3 eh: E\n");
        }else if(mediaPonderada3 < 5){
            printf("A nota da unidade eh: F\n");
        }
    }

    mediaSemestre = (mediaPonderada1 + mediaPonderada2 + mediaPonderada3) / 3;

    if(mediaSemestre >= 9 && mediaSemestre <=10){
            printf("A media semestral eh: A\n");
        }else if(mediaSemestre >= 8 && mediaSemestre < 9){
            printf("A media semestral eh: B\n");
        }else if(mediaSemestre >= 7 && mediaSemestre < 8){
            printf("A media semestral eh: C\n");
        }else if(mediaSemestre >= 6 && mediaSemestre < 7){
            printf("A media semestral eh: D\n");
        }else if(mediaSemestre >= 5 && mediaSemestre < 6){
            printf("A media semestral eh: E\n");
        }else if(mediaSemestre < 5){
            printf("A media semestral eh: F\n");

            }






    return 0;
}
