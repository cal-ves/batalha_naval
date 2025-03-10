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
    int cone[3][5], cruz[3][5], octaedro[3][5];

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

    for (int i; i < 3; i++) // Laço para atribuição de valores das habilidades
    {
        for (int j = 0; j < 5; j++)
        {
            cone[i][j] = 0; // Inicializando as matrizes das habilidades
            cruz[i][j] = 0;
            octaedro[i][j] = 0;
            if (((i == 0 && j == 2)) || (i == 1 && j != 0 && j != 4) || (i == 2)) // Condição para Cone receber seus valores 5
            {
                cone[i][j] = 5;
            }
            if ((i == 0 && j == 2) || (i == 1) || (i == 2 && j == 2)) // Condição para Cruz receber seus valores 5
            {
                cruz[i][j] = 5;
            }
            if ((i == 0 && j == 2) || (i == 1) && (j == 1 || j == 2 || j == 3) || (i == 2 && j == 2)) // Condição para Octaedro receber seus valores 5
            {
                octaedro[i][j] = 5;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            {
                tabuleiro[i + 4][j + 4] = cone[i][j];     // Inicia o cone nas coordenadas 4, 4
                tabuleiro[i][j + 2] = cruz[i][j];         // Inicia a cruz nas coordenadas 0, 2
                tabuleiro[i + 3][j + 1] = octaedro[i][j]; // Inicia o octaedro nas coordenadas 3, 2
            }
        }
    }

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