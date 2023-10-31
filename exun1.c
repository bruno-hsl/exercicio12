#include <stdio.h>
//prototipos
int escolherOpcao();
void aVista(float totalCompra);
void parcelarEDuas();
void parcelarMaisDeTres();


main(){
    int opcaoEscolhida;
    float totalCompra;
    printf("informe o valor total da compra: ");
    scanf("%f", &totalCompra);

    opcaoEscolhida =  escolherOpcao();

    switch (opcaoEscolhida){
        case 1:
            aVista();
            break;
        case 2:
            parcelarEDuas();
            break;
            case 3:
            parcelarMaisDeTres();
            break
    }
 
}

int escolherOpcao(){
    int opcao;
    printf("\n1 - A vista");
    printf("\n2 - parcelado em duas vezes");
    printf("\n3 - Parcela de 3 ate 10 vezes para compras superiores a 100R$");
    printf("Digite a opcao escolhida: ");
    scanf("%d", & opcao);
    if (opcao < 1 || opcao > 10){
        printf("Opcao invalida");
    }
    while(opcao < 1 || opcao > 10);
}

void aVista(float totalCompra){
    float desconto = (totalCompra * 0.10);
    float valorfinal = totalCompra - desconto;
    printf("Valor do desconto %f", &);
}