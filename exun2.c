#include <stdio.h>

void calcularLocacoesGratuitas(const int A[], int locacoesGratuitas[], int tamanho) {
    for (int i = 0; i < tamanho; i++){
        locacoesGratuitas[i] = A[i] / 15;
    }
}

int main(){
    int A[500];
    int locacoesGratuitas[500];

    calcularLocacoesGratuitas(A, locacoesGratuitas, 500);

    for (int i = 0; i < 500; i++) {
        printf("\nCliente [%d] tem direito a [%d] locacoes gratuitas",i + 1, locacoesGratuitas[i]);
    }

    return 0;
}