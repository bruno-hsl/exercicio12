#include <stdio.h>

//funcao para retornar total de dias do mes
int diasNoMes(int mes){
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return diasMes[mes - 1];
}

void calcularIdade(int diaNas, int mesNas, int anoNasc, int ano, int mes, int dia){
    int tanos, tdias, tmeses;
    if(dia >= diaNas){
        tdias = dia - diaNas;
    }else{
        tdias = dia + diasNoMes(mesNas) - diaNas;
        mes--;
    }

    if(mes >= mesNas){
        tmeses = mes + 12 - mesNas;
    }else(
        tmeses = mes + 12 - mesNas;
        ano--;
    )
    tanos = ano - anoNasc;

    printf("Idade: %d anos, %d meses, %d dias", tanos, tmeses, tdias);
}

main(){
    int dia, ano, mes;
    int diaNas, anoNasc, mesNas;
    printf("Digite a data de nascimento: dd mm aa");
    scanf("%d %d %d", &diaNas, &mesNas, &anoNasc);

    printf("Digite a data atual: dd mm aa");
    scanf("%d %d %d", &dia, &mes, &ano);

    calcularIdade(diaNas, mesNas, anoNasc, dia, mes, ano);
}