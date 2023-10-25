#include <stdio.h>

void idadeAnosMesesDias(int idadeEmAnos){

int idadeEmMeses = idadeEmAnos * 12;
int idadeEmDias = idadeEmAnos * 365;

printf("\nIdade: %d", idadeEmAnos);
printf("\nIdade em Meses: %d", idadeEmMeses);
printf("\nIdade em dias: %d", idadeEmDias);
}

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    idadeAnosMesesDias(idade);
    return 0;
}