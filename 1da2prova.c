#include <stdio.h>
#include <stdlib.h>
#define Gustavo "Gustavo Da Silva Sousa"
#define UEPA "Engenharia de Software - Parauapebas"

int main()
{
    system("color 1F");
    printf(Gustavo "\n" UEPA "\n\n");
    printf("Estrutura de Dados\n");
    printf("Avaliacao 2\nQuestao - 1\n\n");

    int i, j, linha, col, soma = 0;
    int **p;
    // definindo tamanho da matriz
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linha);
    printf("\nDigite o numero de colunas da matriz: ");
    scanf("%d", &col);

    // alocando memória para o ponteiro de ponteiro
    p = (int **)malloc(linha * sizeof(int));

    // alocando memória para vetor de ponteiros
    for (i = 0; i < linha; i++)
    {
        p[i] = (int *)malloc(col * sizeof(int));
    }

    if (p == NULL)
    {
        printf("Memoria insuficiente");
    }
    else
    {
        printf("\n");
        // lendo a entrada de dados da matriz
        for (i = 0; i < linha; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("Digite um numero para o indice [%d][%d] da matriz: ", i, j);
                scanf("%d", &p[i][j]);
            }
        }
        // imprimindo a matriz
        for (i = 0; i < linha; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf(" %d ", p[i][j]);
            }
            printf("\n");
        }
        // soma do elementos que nao estao na diagonal principal da matriz
        for (i = 0; i < linha; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i != j)
                {
                    soma += p[i][j];
                }
            }
        }
        printf("A soma dos elementos que nao estao na diagonal principal e: %d", soma);
        //*****************************************
        //liberando a memória do vetor de ponteiros
        for(i = 0; i < linha; i++){
            free(p[i]);
        }
        //liberando a memória do ponteiro de ponteiro
        free(p);
    }

    return 0;
}