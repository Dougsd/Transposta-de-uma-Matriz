#include <stdio.h>
#include <stdlib.h>
#include "def.h"
float **Aloca_matriz ( int linha , int coluna){
    float **matriz;
    int l;
    if(linha <= 0 || coluna <=0){
        printf("\n # Erro: Parâmetros inválidos #");
    }
    matriz = (float **) calloc (linha, sizeof(float *));

    for(l=0; l<linha; l++){
        matriz[l]=(float*) calloc (coluna, sizeof(float ));
    }
    return(matriz);
}

float **Libera_matriz (float **matriz,int linha){
    int  i;
    if (matriz == NULL){return (NULL);}
    for (i=0; i<linha; i++) {
            free (matriz[i]);
    }
    free (matriz);
    return (NULL);
}

void Print_matriz (float **matriz,int coluna, int linha){
     int l,c;
     for(l=0; l<linha; l++){
                for(c=0; c<coluna; c++){
                    printf("  ( %.2f )", matriz[l][c]);
                }
            printf("\n");
      }
}

void Matriz_transposta ( float **matriz,int linha, int coluna) {
  int l, c, aux;

  if(linha == coluna){
    for (l = 0; l < linha; l++) {
        for (c = l+1; c < coluna; c++) {
            if (c != l) {
                aux = matriz[l][c];
                matriz[l][c] = matriz[c][l];
                matriz[c][l] = aux;
            }
        }

    }
    Print_matriz(matriz,coluna,linha);
  }else{
    float **mat_aux;
    mat_aux = Aloca_matriz(coluna,linha);

    for (c = 0; c < coluna; c++) {
        for (l =0; l < linha; l++) {
                mat_aux[c][l]=matriz[l][c];
        }
    }
    Print_matriz(mat_aux,linha,coluna);
    mat_aux = Libera_matriz(mat_aux,coluna);
  }

}
