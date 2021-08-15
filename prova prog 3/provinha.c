/**
==========================================================================
 Autor:     Allan Leandro Fernandes
 Matricula: 20200009264
==========================================================================
*/
#include <stdio.h>
#include <string.h>

typedef struct{            //Essa estrutura através do array compra vai armazenar os dados fornecidos pelo arquivo
    char descricao[101];   //nas variáveis descricao, cod e preco. As variáveis quanti e gasto vao guardar o total gasto 
    int cod, quanti;       //em cada produto e as quantidades compradas.
    float preco, gasto;
    }tProduto;

tProduto compra[10];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';

    }
}

void carregaArquivo(){     //Essa função irá abrir o arquivo e armazena - lo na estrutura. 
    FILE *fp;              //A variável i irá pecorrer a estrutura no while até o arquivo ser todo aberto.
    int i = 0;             //O array str vai armazenar a string dada pelo arquivo atavés de um fgets e 
    char str[101];         //através do strcpy copiar na estrutura.

    fp = fopen("listaDeProdutos.txt", "r"); //fopen irá abrir o arquivo para leitura e guarda em fp e caso 
    if (fp == NULL){                        //de erro e retorne NULL a função irá encerrar.
        return;

    }

    while(1){                       //fgets irá carregar a string do arquivo no array str.
        fgets(str, 101, fp);        //A função RemoveBarraN irá retirar o \n da string que é automático do fgets.
        RemoveBarraN(str);
        if (feof(fp)) break;
        
        strcpy(compra[i].descricao, str);
        fscanf(fp, "%d %f%*c", &compra[i].cod, &compra[i].preco); //O fscanf irá carrega os valores do arquivo 
        i++;                                                      //na estrutura.

    }

    fclose(fp);     //O fclose irá fechar o arquivo para evitar erros.
}

int main(void){
    int cdgo[1000], quant;  //O array cdgo vai armazenar os códigos digitados pelo usuário - o inteiro 
    int i, j, contador = 0; //quant vai armazenar a quantidade de cada produto digitado pelo 
    float total = 0;        //usuário - o i, j e o contador irão pecorrer a estrutura e o array cdgo   
                            //dentro dos for e o while - a variável total vai contabilizar o total gasto nas compras.
   carregaArquivo();

    for (i = 0; i < 10; i++){  //Esse for irá igualar todas variáveis gasto e quanti da estrutura a zero para que possam
        compra[i].gasto = 0;   //ser contabilizadas no while.
        compra[i].quanti = 0;

    }

    while (1){
        scanf("%d %d", &cdgo[contador], &quant); //Esse scanf irá ler e guarda no array cdgo o código digitado e a
                                                 //guarda em quant a quantidade digitada.
        if (cdgo[contador] == 0 && quant == 0) break;

        for (i = 0; i < 10; i++){                 //Esse for irá adicionar o total gasto nas comprar, o total gasto 
            if(compra[i].cod == cdgo[contador]){  //em cada item e a quantidade comprada de cada item.
                compra[i].gasto += (quant * compra[i].preco);
                compra[i].quanti += quant;
                total += (quant * compra[i].preco);

            }
        }
        contador++;
    }

    puts("RESUMO DA COMPRA");
    puts("-----");
                                     //Esses for irão pecorrer a estrutura e o array cdgo
    for (i = 0; i < contador; i++){  //e sempre que o cdgo for igual ao cod da estrutura será impresso na
        for (j = 0; j < 10; j++){    //tela a quantidade comprada daquele item, a descrição e o total gasto nele.
            if (compra[j].cod == cdgo[i]){  
                printf("%dx %s: R$ %.2f\n", compra[j].quanti, compra[j].descricao, compra[j].gasto);
                compra[j].cod = 0;  //O codigo dá estrutura virará 0 para que não seja impresso novamente na tela.

            }
        }
    }

    puts("-----");
    printf("TOTAL: R$ %.2f", total);  //Por fim será impresso o total gasto.

    return 0;
}
