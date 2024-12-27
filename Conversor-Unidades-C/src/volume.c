#include <stdio.h>
#include "include/volume.h"
#include <locale.h>

void converterVolume() {
    int opcao;
    float valor, result;

    printf("Escolha uma op��o de convers�o:\n");

    printf("1 - Litros para Mililitros\n");
    printf("2 - Litros para Metros C�bicos\n");
    printf("3 - Mililitros para Litros\n");
    printf("4 - Mililitros para Metros C�bicos\n");
    printf("5 - Metros C�bicos para Litros\n");
    printf("6 - Metros C�bicos para Mililitros\n");
    
    printf("Digite a op��o desejada: ");
    scanf("%d", &opcao);
    

    printf("Digite o valor (decfimal) a ser convertido: ");
    scanf("%f", &valor);

    switch (opcao){
    case 1:
        result = valor * 1000;
        printf("%.2f litros s�o %.2f mililitros.\n", valor, result);
        break;

    case 2:
        result = valor / 1000;
        printf("%.2f litros s�o %.6f metros c�bicos.\n", valor, result);
        break;
     
    case 3:
        result = valor / 1000;
        printf("%.2f mililitros s�o %.2f litros.\n", valor, result);
        break;

    case 4:
        result = valor / 1e6;
        printf("%.2f mililitros s�o %.6f metros c�bicos.\n", valor, result);
        break;

    case 5:
        result = valor * 1000;
        printf("%.6f metros c�bicos s�o %.2f litros.\n", valor, result);
        break;

    case 6: 
        result = valor * 1e6;
        printf("%.6f metros c�bicos s�o %.2f mililitros.\n", valor, result);
        break;

    default:
        printf("Op��o inv�lida! Tente novamente.\n");
        break;
    }
}
