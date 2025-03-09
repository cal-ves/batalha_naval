#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main()
{
    int tabuleiro[LINHAS][COLUNAS] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}},
        navio1[3] = {3, 3, 3}; // Declaração da matriz 10x10 do tabuleiro e arrays de tamanho 3 para os navios

    tabuleiro[4][6] = navio1[0]; // Atribuição do navio 1 na horizontal
    tabuleiro[4][7] = navio1[1];
    tabuleiro[4][8] = navio1[2];

    tabuleiro[7][8] = navio1[0]; // Atribuição do navio 2 na vertical
    tabuleiro[8][8] = navio1[1];
    tabuleiro[9][8] = navio1[2];

    tabuleiro[3][9] = navio1[0]; // Atribuição do navio 3 na diagonal
    tabuleiro[2][8] = navio1[1];
    tabuleiro[1][7] = navio1[2];

    tabuleiro[6][4] = navio1[0]; // Atribuição do navio 4 na diagonal
    tabuleiro[7][5] = navio1[1];
    tabuleiro[8][6] = navio1[2];

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}