#include <stdio.h>

int main(){
    int matriz[61][10];

    for (int linha = 0; linha < 61; linha++){
        for (int coluna = 0; coluna < 10; coluna++){
            matriz[linha][coluna] = linha + coluna;
        }
    }
    
    somarMatriz(matriz);
    imprimir(matriz);
    return 0;
}

void somarMatriz(int matriz[61][10]){
    for (int coluna = 0; coluna < 10; coluna++){
        int soma = 0;
        for (int linha = 0; linha < 61; linha++){
            soma += matriz[linha][coluna];
        }
        matriz[60][coluna] = soma;
    }
}

    void imprimir(int matriz[61][10]){
        for (int linha = 0; linha < 61; linha++){
            for (int coluna = 0; coluna < 10; coluna++){
                printf("[%d] ", matriz[linha][coluna]);
            }
        }
        
    }
