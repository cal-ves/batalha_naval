#include <stdio.h>

int main()
{
    int tabuleiro[10][10] = {
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
        navio1[3] = {3, 3, 3}, navio2[3] = {3, 3, 3}; // Declaração da matriz 10x10 do tabuleiro e arrays de tamanho 3 para os navios

    tabuleiro[4][6] = navio1[0]; // Atribuição do navio 1 na horizontal
    tabuleiro[4][7] = navio1[1];
    tabuleiro[4][8] = navio1[2];

    tabuleiro[7][8] = navio2[0]; // Atribuição do navio 2 na vertical
    tabuleiro[8][8] = navio2[1];
    tabuleiro[9][8] = navio2[2];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}