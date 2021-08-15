#include <stdio.h>

int main(void) {
    float salario, nsalario, aumento;

    scanf("%f", &salario);

    if (salario > 0 && salario <= 400) {
       nsalario = salario * 1.15;
       aumento = nsalario - salario;

       printf("Novo salario: %.2f\n", nsalario);
       printf("Reajuste ganho: %.2f\n", aumento);
       printf("Em percentual: 15 %%\n");

    }else  if (salario > 400 && salario <= 800) {
       nsalario = salario * 1.12;
       aumento = nsalario - salario;

       printf("Novo salario: %.2f\n", nsalario);
       printf("Reajuste ganho: %.2f\n", aumento);
       printf("Em percentual: 12 %%\n");
    
    }else if (salario > 800 && salario <= 1200) {
       nsalario = salario * 1.10;
       aumento = nsalario - salario;

       printf("Novo salario: %.2f\n", nsalario);
       printf("Reajuste ganho: %.2f\n", aumento);
       printf("Em percentual: 10 %%\n");

    }else if (salario > 1200 && salario <= 2000) {
       nsalario = salario * 1.07;
       aumento = nsalario - salario;

       printf("Novo salario: %.2f\n", nsalario);
       printf("Reajuste ganho: %.2f\n", aumento);
       printf("Em percentual: 7 %%\n");
       
    }else if (salario > 2000) {
       nsalario = salario * 1.04;
       aumento = nsalario - salario;

       printf("Novo salario: %.2f\n", nsalario);
       printf("Reajuste ganho: %.2f\n", aumento);
       printf("Em percentual: 4 %%\n");

    }


    return 0;
}