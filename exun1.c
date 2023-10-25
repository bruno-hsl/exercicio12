#include <stdio.h>

char solicitarOpcao() {
    char opcao;
    
    printf("Opcoes de pagamento:\n");
    printf("a) A vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preço da etiqueta)\n");
    printf("c) De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");

    printf("Escolha a opção desejada (a, b ou c): ");
    scanf(" %c", &opcao);
    
    return opcao;
}

float opcaoA(float totalGasto) {
    return totalGasto * 0.9;
}

float opcaoB(float totalGasto) {
    return totalGasto;
}

float opcaoC(float totalGasto) {
    if (totalGasto > 100.0) {
        int parcelas;
        float valorPrestacao, totalComJuros;

        printf("Digite o numero de parcelas (3 a 10): ");
        scanf("%d", &parcelas);

        if (parcelas >= 3 && parcelas <= 10) {
            valorPrestacao = totalGasto / parcelas;
            totalComJuros = totalGasto + (totalGasto * 0.03 * parcelas);
            return totalComJuros;
        } else {
            printf("Numero de parcelas invalido. Escolha entre 3 e 10.\n");
            return 0.0; 
        }
    } else {
        printf("Opcao C e valida somente para compras acima de R$ 100,00.\n");
        return 0.0; 
    }
}

int main() {
    float totalGasto;
    char opcao;

    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &totalGasto);

    opcao = solicitarOpcao();

    switch (opcao) {
        case 'a':
            printf("Opcao escolhida: A vista com 10%% de desconto.\n");
            printf("Valor total das prestacoes: R$ %.2f\n", opcaoA(totalGasto));
            break;
        case 'b':
            printf("Opcao escolhida: Em duas vezes (preco da etiqueta).\n");
            printf("Valor total das prestacoes: R$ %.2f\n", opcaoB(totalGasto));
            break;
        case 'c':
            printf("Opcao escolhida: De 3 ate 10 vezes com 3%% de juros ao mes.\n");
            float totalComJuros = opcaoC(totalGasto);
            if (totalComJuros > 0.0) {
                printf("Valor total das prestacoes: R$ %.2f\n", totalComJuros);
            }
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
