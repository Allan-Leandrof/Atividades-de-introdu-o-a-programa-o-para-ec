#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 30
#define MAX_NOME 40

int qDiscente;

typedef struct{
    char matricula[MAX_ALUNOS];
    char nome[MAX_NOME];
    float nota[3];
    float notaRec;
    }tDiscente;

tDiscente discente[MAX_ALUNOS];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void AdicionaAluno(int quantAlunos){
    int i;

    for (i = qDiscente; i < quantAlunos; i++){
        printf("Insira as informacoes do discente #%d: \n", i + 1);
        printf("\tMatricula: ");
        scanf("%s%*c", discente[i].matricula);
        printf("\tNome: ");
        fgets(discente[i].nome, MAX_NOME, stdin);
        RemoveBarraN(discente[i].nome);
    }
}

void CadastraNotas(int quantAlunos){
    int i;

    for(i = qDiscente; i < quantAlunos; i++){
        printf("\nNotas do discente %s (%s):\n", discente[i].nome, discente[i].matricula);
        printf("\tNota 1: ");
        scanf("%f", &discente[i].nota[1]);
        printf("\tNota 2: ");
        scanf("%f", &discente[i].nota[2]);
        printf("\tNota 3: ");
        scanf("%f", &discente[i].nota[3]);
    }
}

float MediaAprovado(int i){
    float media;

    media = (discente[i].nota[1] + discente[i].nota[2] + discente[i].nota[3]) / 3;

    return media;
}

float MediaRecuperacao(int i){
    float media;

    media = (MediaAprovado(i) * 6 + discente[i].notaRec * 4)  / 10;

    return media;
}

void Recuperacao(int quantAlunos){
    int i;

    for(i = qDiscente; i <= quantAlunos; i++){
        if (MediaAprovado(i) < 7 && MediaAprovado(i) >= 4){
                printf("\nMedia do discente %s (%s): %.1f\n", discente[i].nome, discente[i].matricula, MediaAprovado(i));
                printf("\tNota Recuperacao: ");
                scanf("%f", &discente[i].notaRec);
            }
    }
}

void Relatorio(char *str, int quantAlunos){
    int i;

    printf("Disciplina: %s", str);
    printf("\n---------------------------------------------------------------------------------\n");
    printf(" Matricula\tNome\t\tNota 1\tNota 2\tNota 3\tRec\tMedia\tSituacao\n");
    printf("---------------------------------------------------------------------------------\n");

    for(i = 0; i < quantAlunos; i++){
        if (MediaAprovado(i) < 4){
            printf(" %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t-\t%.1f\tReprovado\n", discente[i].matricula, discente[i].nome,
                discente[i].nota[1], discente[i].nota[2], discente[i].nota[3], MediaAprovado(i));
        }else if (MediaRecuperacao(i) < 5){
            printf(" %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\tReprovado\n", discente[i].matricula, discente[i].nome,
                discente[i].nota[1], discente[i].nota[2], discente[i].nota[3],discente[i].notaRec, MediaRecuperacao(i));
        }else if (MediaAprovado(i) < 7 && MediaRecuperacao(i) >= 5){
            printf(" %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\tAprovado\n", discente[i].matricula, discente[i].nome,
                discente[i].nota[1], discente[i].nota[2], discente[i].nota[3],discente[i].notaRec, MediaRecuperacao(i));
        }else{
            printf(" %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t-\t%.1f\tAprovado\n", discente[i].matricula, discente[i].nome,
                discente[i].nota[1], discente[i].nota[2], discente[i].nota[3], MediaAprovado(i));
        }
    }

    printf("---------------------------------------------------------------------------------\n");
}

void CarregaDados(){
    FILE *fp;
    char str[101];

    fp = fopen("notas.bin", "rb");
    if (fp == NULL){
        printf("Erro ao abrir o arquivo de dados.\n");
        return;
    }

    while(1){
        fread(&discente[qDiscente], sizeof(discente[0]), 1, fp);
        if (feof(fp))
            break;
        qDiscente++;
        
    }

    if (fclose(fp) == 0){
        printf("Dados carregados com sucesso.\n");
    }
}


void SalvaDados(int quantAlunos){
    int i;
    FILE *fp;

    fp = fopen("notas.bin", "wb");
    if (fp == NULL){
        printf("Erro ao criar o arquivo de dados.\n");
        return;
    }
    for(i = 0; i < quantAlunos; i++){
        fwrite(&discente[i], sizeof(discente[i]), 1, fp);
    }

    if (fclose(fp) == 0){
        printf("Dados salvos com sucesso.\n");
    }
}


int main(void){
    int opcao;
    int quantAlunos;
    char nomeDisc[50];

    puts("-------------->>>Ola, bem vindo!!!<<<--------------");
    printf("Informe o nome da disciplina: ");
    fgets(nomeDisc, 50, stdin);
    RemoveBarraN(nomeDisc);
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &quantAlunos);

    printf("Para carregar digite 1, Para sair digite 2: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        CarregaDados();
        Relatorio(nomeDisc, qDiscente);
    }

    AdicionaAluno(quantAlunos);
    CadastraNotas(quantAlunos);
    Recuperacao(quantAlunos);
    Relatorio(nomeDisc, quantAlunos);

    printf("Para salvar digite 1 - Para sair digite 2: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        SalvaDados(quantAlunos);
    }
    


    return 0;
}
