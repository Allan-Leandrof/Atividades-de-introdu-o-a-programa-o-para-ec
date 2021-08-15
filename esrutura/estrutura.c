#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa mantem um cadastro de um tesouro e sua localizacao.\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg) {
    printf("Insira uma descricao do tesouro: ");
    fgets(reg->descricao, MAX_DESCRICAO, stdin);
    printf("Insira o valor do tesouro: ");
    scanf("%f", &reg->valor);
    printf("Insira a coodenada X: ");
    scanf("%d", &reg->x);
    printf("Insira a coodenada Y: ");
    scanf("%d", &reg->y);
    return reg;
}

void ImprimeRegistro(const tRegistro *reg) {
    printf("O tesouro possui: %s\nEle esta avaliado em: %.2f\nSua coordenada X eh: %d\nSua coordenada Y eh: %d\n", reg->descricao, reg->valor, reg->x, reg->y);
}

float Distancia(tRegistro reg, int x, int y){
    return sqrt((x-reg.x)*(x-reg.x) + (y-reg.y)*(y-reg.y));
}

int main(void)
{
    tRegistro reg; //guarda o registro
    int opcao;
    int xis, yes, Distan;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d%*c", &opcao);

        if (opcao == 5){
            break;
        }


        switch(opcao){
            case 1:
                CadastroRegistro(&reg);
                break;
            case 2:
                ImprimeRegistro(&reg);
                break;
            case 3:
                printf("Informe as coordenadas X e Y para comparacao: ");
                scanf("%d%d", &xis, &yes);
                Distan = Distancia(reg, xis, yes);
                printf("A distancia entre as coordenas digitadas e do tesouro eh: %d\n", Distan);
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Adeus");
    return 0;
}