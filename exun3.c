#include <stdio.h>

void trocarLinhas(int matriz[10][10], int linha1, int linha2) {
    for (int coluna = 0; coluna < 10; coluna++) {
        int temp = matriz[linha1][coluna];
        matriz[linha1][coluna] = matriz[linha2][coluna];
        matriz[linha2][coluna] = temp;
    }
}

void trocarColunas(int matriz[10][10], int coluna1, int coluna2) {
    for (int linha = 0; linha < 10; linha++) {
        int temp = matriz[linha][coluna1];
        matriz[linha][coluna1] = matriz[linha][coluna2];
        matriz[linha][coluna2] = temp;
    }
}

void trocarDiagonais(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;
    }
}

void trocarLinhaComColuna(int matriz[10][10], int linha, int coluna) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[linha][i];
        matriz[linha][i] = matriz[i][coluna];
        matriz[i][coluna] = temp;
    }
}

void imprimirMatriz(int matriz[10][10]) {
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[10][10];

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            matriz[linha][coluna] = linha * 10 + coluna;
        }
    }

    printf("Matriz original:\n");
    imprimirMatriz(matriz);
    trocarLinhas(matriz, 2, 8);
    trocarColunas(matriz, 4, 9);
    trocarDiagonais(matriz);
    trocarLinhaComColuna(matriz, 4, 9);

    printf("\nMatriz após as trocas:\n");
    imprimirMatriz(matriz);

    return 0;
}
