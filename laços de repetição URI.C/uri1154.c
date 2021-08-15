#include <stdio.h>

int main() {
    int age;
    float media, soma, individuos;

    age = 1;
    soma = 0;
    individuos = 0;
    while (age >= 0){
        scanf("%d", &age);
        if(age >= 0){
            soma = soma + age;
            individuos = individuos + 1;
        }
    }

    media = soma / individuos;
    printf("%.2f", media);



    return 0;
}
