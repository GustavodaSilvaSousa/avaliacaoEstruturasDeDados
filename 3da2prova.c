#include <stdio.h>
#include <stdlib.h>
#define col 5
#define lin 5
#define Gustavo "Gustavo Da Silva Sousa"
#define UEPA "Engenharia de Software - Parauapebas"



    

int mat[lin][col] = {
    {0, 614, 0, 870, 1614},
    {614, 0, 434, 586, 0},
    {0, 434, 0, 429, 0},
    {870, 586, 429, 0, 1109},
    {1614, 0, 0, 1109, 0},
};

//verifica se o grafo é completo
void completo(){
    int i, j, comp = 0;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if (mat[i][j] == 0 && i != j){
                comp = 1;
            }  
        }
    }
    if(comp == 0){
        printf("\nO grafo e completo\n");
    }
    else{
        printf("\nO grafo nao e completo");
    }
}

void temLigacao(int x, int y){
    x = x - 1;
    y = y - 1;
    if(mat[x][y] == 0){
        printf("\nNao tem ligacao entre os nos %d e %d\n",x + 1, y + 1);
    }
    else{
        printf("\nTem ligacao entre os nos %d e %d, a distancia em entre eles e %dKM\n",x + 1, y + 1, mat[x][y]);
    }
}
// verifica os vertice de cada nó
void grau_No(int no){
    no = no - 1;
    int j, grau = 0;

    for(j = 0; j < col; j++){
        if(mat[no][j] != 0){
            grau = grau + 1;
        }
    }
    printf("\nGrau da cidade %d tem %d vertices\n", no + 1,grau);
}
void distanciaDaCidade(){
    int i, j, maior = 0, cdd1,cdd2;

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                cdd1 = i;
                cdd2 = j;
            }
        }    
    }
    printf("A maior distancia está entre a cidade %d e cidade %d com a %dKM de distancia",cdd1+1,cdd2+1,maior);
}

int main(){
    system("color 1F");
    printf(Gustavo "\n" UEPA "\n\n");
    printf("Estrutura de Dados\n");
    printf("Avaliacao 2\nQuestao - 3\n\n");
    
    int no1, no2,grauNo;
    printf("Entre com a primeira cidade: \n1 = BRASILIA\n2 = BH\n3 = RJ\n4 = SP\n5 = PORTO ALEGRE\n");
    scanf("%d",&no1);
    printf("Entre com a segunda cidade: \n1 = BRASILIA\n2 = BH\n3 = RJ\n4 = SP\n5 = PORTO ALEGRE\n");
    scanf("%d",&no2);
    //verifica se as cidades tem ligação
    temLigacao(no1,no2);
    
    //verifica quantas ligações cada cidade tem
    printf("\nEscolha uma cidade para saber o grau:\n1 = BRASILIA\n2 = BH\n3 = RJ\n4 = SP\n5 = PORTO ALEGRE\n");
    scanf("%d",&grauNo);
    grau_No(grauNo);
    printf("\n");
    //verifica se o grafo é completo
    completo();
    printf("\n");
    //as cidades mais afastadas
    distanciaDaCidade();
    return 0;
}