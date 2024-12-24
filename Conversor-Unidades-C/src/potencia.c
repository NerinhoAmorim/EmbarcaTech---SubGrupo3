#include "include/potencia.h"
#include "stdio.h"

void Conversao_de_Potencia() {
    double valor; // Declarando variável que irá receber o valor a ser convertido
    int opc; // Declarando variável que irá receber a opção de conversão 

    printf("Digite o valor a ser convertido: "); // Solicitação ao usuário do valor a ser convertido  
    scanf("%lf", &valor); // Atribuindo o valor inserido pelo usuário à variável 'valor'

    printf("Selecione a conversão:\n");
    printf("1 - (W) -> (KW)\n");
    printf("2 - (W) -> (cv)\n");
    printf("3 - (KW) -> (W)\n");
    printf("4 - (KW) -> (cv)\n");
    printf("5 - (cv) -> (W)\n");
    printf("6 - (cv) -> (KW)\n");
    printf("Digite a opção: ");
    scanf("%d", &opc); // Atribuindo a opção inserida pelo usuário à variável 'opc'

    switch (opc) { // Escolhendo a conversão com base na opção fornecida
        case 1: // Converter de Watts para Quilowatts
            printf("%.2f W equivale a %.9f KW\n", valor, valor / 1000); // Convertendo de W para KW
            break;
        case 2: // Converter de Watts para Cavalo-vapor (CV)
            printf("%.2f W equivale a %.9f CV\n", valor, valor / 736); // Convertendo de W para CV
            break;
        case 3: // Converter de Quilowatts para Watts
            printf("%.2f KW equivale a %.9f W\n", valor, valor * 1000); // Convertendo de KW para W
            break;
        case 4: // Converter de Quilowatts para Cavalo-vapor (CV)
            printf("%.2f KW equivale a %.9f CV\n", valor, valor * 1.36); // Convertendo de KW para CV
            break;
        case 5: // Converter de Cavalo-vapor (CV) para Watts
            printf("%.2f CV equivale a %.9f W\n", valor, valor * 736); // Convertendo de CV para W
            break;            
        case 6: // Converter de Cavalo-vapor (CV) para Quilowatts
            printf("%.2f CV equivale a %.9f KW\n", valor, valor / 1.36); // Convertendo de CV para KW
            break; 
        default: // Opção inválida
            printf("Opção inválida!\n");
    }
}
