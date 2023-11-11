#include <stdio.h>


//se soma igual: retorna 0, se soma diferente: retorna 1
int somaIgual(int** matriz, int linhas, int colunas)
{
    int somaLinha = 0;
    int valorSoma = 0;
    for(int k = 0; k < colunas; k++)
    {
        valorSoma += matriz[0][k];
    }

    for(int i = 1; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            somaLinha += matriz[i][j];
        }
        if(somaLinha != valorSoma)
        {
            printf("O valor da soma não é igual");
            return 1;
        }
    }
    printf("O valor da soma e igual");
    return 0;
}