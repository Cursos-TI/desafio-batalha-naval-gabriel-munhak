#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
int tabuleiro[10][10] = {0};

void posicionaNavio(int linha, int coluna, int orientacao) {
    if(orientacao == 0) { // horizontal
        for(int i = coluna; i < coluna + 3; i ++){
           if(coluna <= 8) {
            tabuleiro[linha][i] == 0 ? tabuleiro[linha][i] = 3 : printf("Você não pode sobrepor barcos\n\n");
           } else {
            printf("Valor superior ao tamanho do barco, tente novamente\n\n");
           }
        }
    } else if (orientacao == 1) { // vertical
        for(int i = linha; i < linha + 3; i ++){
            if(linha <= 8) {
                tabuleiro[i][coluna] == 0 ? tabuleiro[i][coluna] = 3 : printf("Você não pode sobrepor barcos\n\n");
            } else {
                printf("Valor superior ao tamanho do barco, tente novamente\n\n");
            }
        }
    } else if (orientacao == 2) { // diagonal direita


        for(int i = linha; i < linha + 3; i ++){
            if(linha <= 8) {
                tabuleiro[i][coluna] == 0 ? tabuleiro[i][coluna + i] = 3 : printf("Você não pode sobrepor barcos\n\n");
            } else {
                printf("Valor superior ao tamanho do barco, tente novamente\n\n");
            }
        }


    } else if(orientacao == 3){ // diagonal esquerda


        for(int i = linha; i < linha + 3; i ++){
            if(linha <= 8) {
                tabuleiro[i][coluna] == 0 ? tabuleiro[i][coluna - i] = 3 : printf("Você não pode sobrepor barcos\n\n");
            } else {
                printf("Valor superior ao tamanho do barco, tente novamente\n\n");
            }
        }


    } else {
        printf("Valor de orientação inválido, digite 0 para horizontal ou 1 para vertical");
    }
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    posicionaNavio(1, 3, 0);
    posicionaNavio(4, 6, 1);
    posicionaNavio(2, 5, 2);
    posicionaNavio(8, 2, 3);

    printf("   ");

    for(int i = 0; i < 10; i++) {
        printf("%2c ", linha[i]);
        if(i == 9) {
            printf("%2c\n", linha[i]);
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);

        for(int j = 0; j < 11; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }

        printf("\n");;
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

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
