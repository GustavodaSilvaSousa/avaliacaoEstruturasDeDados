#include <stdio.h>
#define tam 5
typedef struct
{
    char nome[30];
    float nota;
} sala;

int main()
{
    int i, maiorN,aux, ordem[tam];

    sala alunos[tam];
    for (i = 0; i < tam; i++)
    {
        printf(" Digite o nome do aluno %d: ", i + 1);
        gets(alunos[i].nome); // usei a função gets pois com o scanf dá bug nas strigs com espaço
        printf(" Digite a nota do aluno %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].nota);
        getchar(); // Pois na próxima passada do for o nome do aluno recebia "ENTER"
        printf("\n");
    }
    for (i = 0; i < tam; i++)
    {
        if (alunos[i].nota > maiorN)
        {
            maiorN = alunos[i].nota;
            printf("%d\n",maiorN);
            
        }
        
        
    }
}