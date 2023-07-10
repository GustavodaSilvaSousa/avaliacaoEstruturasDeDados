#include <stdio.h>
#include <stdlib.h>
#define Gustavo "Gustavo Da Silva Sousa"
#define UEPA "Engenharia de Software - Parauapebas"
#define tam 3


typedef struct
{
    int matricula;
    char nome[30];
    float av1, av2;
} TurmaBes; // criação da var tipo TurmaBes

int main()
{
    system("color 1F");
    printf(Gustavo "\n" UEPA "\n\n");
    printf("Estrutura de Dados\n");
    printf("Avaliacao 2\nQuestao - 2\n\n");
    int i;
    TurmaBes alunos[tam];
    // entrada de dados
    for (i = 0; i < tam; i++)
    {   
        printf("\t============================\n");
        printf("\tENTRADA DE DADOS DO ALUNO %d\n", i + 1);
        printf("\t============================\n");
        printf(" Digite o nome do aluno %d: ", i + 1);
        gets(alunos[i].nome); // usei a função gets pois com o scanf dá bug nas strigs com espaço
        printf(" Digite a matricula do aluno %s: ", alunos[i].nome);
        scanf("%d", &alunos[i].matricula);
        printf(" Digite a nota da AVALIACAO 1 do aluno %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].av1);
        printf(" Digite a nota da AVALIACAO 2 do aluno %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].av2);
        getchar(); // Pois na próxima passada do for o nome do aluno recebia "ENTER"
        printf("\n");
    }
        printf("\n\n");

    //saida de dados
    for(i = 0; i < tam; i++){
        printf("\t=================\n");
        printf("\tDADOS DO ALUNO %d\n", i + 1);
        printf("\t=================\n");
        printf(" NOME: %s\n",alunos[i].nome);
        printf(" MATRICULA: %d\n",alunos[i].matricula);
        printf(" NOTA DA AVALIACAO 1: %.2f\n NOTA DA AVALIACAO 2: %.2f ",alunos[i].av1,alunos[i].av2);
        printf("\n\n");
    }
    return 0;
}