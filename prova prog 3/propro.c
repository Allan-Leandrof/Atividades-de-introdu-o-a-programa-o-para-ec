/* *** CABEÇALHO ******
DISCENTE: Mateus Lima Cavalcanti de Albuquerque
Matrícula: 20200011262 */

#include <stdio.h>
#include <string.h>

#define MAX_CARACTERES 100

typedef struct{
    char nomeProduto[MAX_CARACTERES];  // Estrutura para armazenar os itens lidos do arquivo.
    int Codigo;
    int Qtd;
    float total;
    float valor;

}tGuarda;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){  //Função padrão para remover o '\n' adicionado automaticamente pela fgets.
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    int i = 0, l = 0, k = 0, codigo[100], qtd, quantidadeComprada[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};  //Variável 'k' funciona como um contador de repetições.
    float total = 0, dinheiro[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    tGuarda guarda[MAX_CARACTERES];

    FILE *fpIN;

    fpIN = fopen("listaDeProdutos.txt", "rt");
    if(!fpIN){
        printf("Erro");
        return 1;
    }
    while(1){
        fgets(guarda[k].nomeProduto, MAX_CARACTERES, fpIN);  // Leitura dos dados do arquivo.
        RemoveBarraN(guarda[k].nomeProduto);

        fscanf(fpIN, "%d", &guarda[k].Codigo);
        fscanf(fpIN, "%f", &guarda[k].valor);

        if(feof(fpIN)){   //Para finalizar a leitura do arquivo assim que não haja mais nada para ler.
            break;
        }
         k++;
    }
    fclose(fpIN);

    k = 0;
    while(1){
        scanf("%d %d", &codigo[k], &qtd);  //Parte onde o usuário digita o que vai comprar e quanto vai comprar.

        if (codigo[k] == 0 && qtd == 0){
            break;
        }
        for (i = 0; i < 10; i++){                       //Esse for irá adicionar o total gasto nas comprar, o total gasto em cada item
        if(guarda[i].Codigo == codigo[k]){        //e a quantidade comprada de cada item.
            dinheiro[i] += qtd * guarda[i].valor;
            quantidadeComprada[i] += qtd;
            total += qtd * guarda[i].valor;
            }
        }
        k++;
    }


    printf("RESUMO DA COMPRA\n");
    printf("-----\n");

    i = 0;
    while (i < k){
        l = 0;
        while (l < 10){
             if (guarda[l].Codigo == codigo[i]){
                printf("%dx %s: R$ %.2f\n", quantidadeComprada[l], guarda[l].nomeProduto, dinheiro[l]);
                guarda[l].Codigo = 11;
            }

            l++;
        }

        i++;
    }
    printf("-----\n");
    printf("TOTAL: R$ %.2f", total);
    return 0;
}