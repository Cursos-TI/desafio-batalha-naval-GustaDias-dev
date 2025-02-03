#include <stdio.h>

#define TAMANHO_TABULEIRO 10
//Tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]){
        printf("Tabuleiro: \n");
        for (int i = 0; i < TAMANHO_TABULEIRO; i++){
            for(int j = 0; j < TAMANHO_TABULEIRO; j++){
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }
void aplicarCruz(int tabuleiro [TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]){
    for (int i = 1; i <=3; i++){
        for (int j = 0; j <= 4; j++){
            tabuleiro [2][j] = 1;
        }
        tabuleiro [i][2] = 1;
    }

}
void aplicarOctaedro(int tabuleiro [TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]){
    for (int i = 1; i <=3; i++){
        for (int j = 6; j <= 8; j++){
            tabuleiro [2][j] = 1;
        }
        tabuleiro [i][7] = 1;
    }
}
void aplicarCone(int tabuleiro [TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]){
    for(int i = 3; i <= 7; i++){
        for (int j = 4; j <= 6; j++){
            for (int k = 5; k <= 5; k++){
                tabuleiro [7][k] = 1;
            }
            tabuleiro [8][j] = 1;
        }
        tabuleiro [9][i] = 1;
    }
}

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    /*int tabuleiro [5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}                                                                   
    };

    printf("Parte do navio posicionada na casa %d \n", tabuleiro [1][3]);
    printf("Parte do navio posicionada na casa %d \n", tabuleiro [1][4]);
    printf("Parte do navio posicionada na casa %d \n", tabuleiro [2][1]);
    printf("Parte do navio posicionada na casa %d \n", tabuleiro [3][1]); */


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    /*int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0}; //Vertical (coluna 2,linha 1 a 4)
    for (int i = 1; i <= 4; i++){
        tabuleiro[i][2] = 3;
    }
    for (int j = 3; j <= 6; j++){ //Horizontal (coluna 5, linha 3 a 6)
        tabuleiro[5][j] = 3;
    }
    for (int i = 1; i <= 4; i++){ //Diagonal (1,1 a 4,4)
        tabuleiro[i][i] = 3;
    }
    for (int i = 1, j = 8; i <= 4; i++, j--){ //Diagonal (1,8 a 4,5)
        tabuleiro [i][j] = 3;
    }
    exibirTabuleiro(tabuleiro);*/




    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
    int tabuleiro [TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    aplicarCone(tabuleiro);
    aplicarCruz(tabuleiro);
    aplicarOctaedro(tabuleiro);
    exibirTabuleiro(tabuleiro);
    
    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
