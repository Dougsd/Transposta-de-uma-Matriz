#include <stdio.h>
#include <stdlib.h>
#include "def.h"
int main()
{
    int linha,coluna,l,c;
    float e;
    printf("\nInsira Uma Matriz para calcular a transposta");
    printf("\nInforme a quantidade de linhas da matriz=");
    scanf("%d",&linha);
    printf("\nInforme a quantidade de colunas da matriz=");
    scanf("%d",&coluna);
    float **matriz;
    matriz = Aloca_matriz(linha,coluna);
    system("cls");

    for(l=0; l<linha; l++){
        for(c=0; c<coluna; c++){
            printf("\nInforme um elemento para a Linha [%d] e Coluna [%d] da Matriz =",l,c);
            scanf("%f",&e);
            matriz[l][c]=e;
        }
    }

    Print_matriz(matriz,coluna,linha);
    printf("\n\n");
    Matriz_transposta(matriz,linha,coluna);
    printf("\n\n");
    matriz = Libera_matriz (matriz, linha);
    return 0;
}
