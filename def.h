#ifndef DEF_H_INCLUDED
#define DEF_H_INCLUDED

float **matriz;
void Print_matriz (float **matriz, int coluna, int linha);
float** Aloca_matriz (int linha , int coluna);
float** Libera_matriz (float **matriz,int linha);
void Matriz_transposta ( float **matriz,int linha, int coluna);

#endif // DEF_H_INCLUDED
