#include <stdio.h>
#include "include/volume.h"
#include <locale.h>

void converterVolume() {
    int opcao;
    float valor, result;

    printf("Escolha uma opção de conversão:\n");

    printf("1 - Litros para Mililitros\n");
    printf("2 - Litros para Metros Cúbicos\n");
    printf("3 - Mililitros para Litros\n");
    printf("4 - Mililitros para Metros Cúbicos\n");
    printf("5 - Metros Cúbicos para Litros\n");
    printf("6 - Metros Cúbicos para Mililitros\n");
    
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    

    printf("Digite o valor (decfimal) a ser convertido: ");
    scanf("%f", &valor);

    switch (opcao){
    case 1:
        result = valor * 1000;
        printf("%.2f litros são %.2f mililitros.\n", valor, result);
        break;

    case 2:
        result = valor / 1000;
        printf("%.2f litros são %.6f metros cúbicos.\n", valor, result);
        break;
     
    case 3:
        result = valor / 1000;
        printf("%.2f mililitros são %.2f litros.\n", valor, result);
        break;

    case 4:
        result = valor / 1e6;
        printf("%.2f mililitros são %.6f metros cúbicos.\n", valor, result);
        break;

    case 5:
        result = valor * 1000;
        printf("%.6f metros cúbicos são %.2f litros.\n", valor, result);
        break;

    case 6: 
        result = valor * 1e6;
        printf("%.6f metros cúbicos são %.2f mililitros.\n", valor, result);
        break;

    default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    }
}
