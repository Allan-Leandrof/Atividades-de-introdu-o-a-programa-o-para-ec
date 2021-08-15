#include <stdio.h>


int main(void){
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 20){
        printf("Essa pessoa eh jovem");
    }else if(idade > 18 && idade <= 59){
        printf("Essa pessoa eh adulta");
    }else if(idade > 59){
        printf("Essa pessoa eh idosa");
    }






    return 0;
}
