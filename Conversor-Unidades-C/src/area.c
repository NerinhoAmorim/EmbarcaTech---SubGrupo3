#include <stdio.h>
#include "include/area.h"

// Função para converter de metros quadrados para centímetros quadrados
double metros_para_centimetros(double metros) {
    return metros * 10000; // 1 m² = 10.000 cm²
}

// Função para converter de centímetros quadrados para metros quadrados
double centimetros_para_metros(double centimetros) {
    return centimetros / 10000; // 1 cm² = 0,0001 m²
}

// Função que processa as conversões com base na opção escolhida
void processar_conversao_areas() {
    int opcao;
    double area, resultado;

    do {
        printf("=== Conversor de Áreas ===\n");
        printf("1. Converter de m² para cm²\n");
        printf("2. Converter de cm² para m²\n");
        printf("0. Sair\n");
        printf("==========================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao); // Lê a opção do usuário

        switch (opcao) {
            case 1:
                printf("Digite a área em m²: ");
                scanf("%lf", &area); // Lê a área em m²
                resultado = metros_para_centimetros(area); // Chama a função de conversão
                printf("%.2lf m² equivale a %.2lf cm²\n\n", area, resultado);
                break;
            case 2:
                printf("Digite a área em cm²: ");
                scanf("%lf", &area); // Lê a área em cm²
                resultado = centimetros_para_metros(area); // Chama a função de conversão
                printf("%.2lf cm² equivale a %.2lf m²\n\n", area, resultado);
                break;
            case 0:
                printf("Saindo do conversor de áreas...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n\n");
        }
    } while (opcao != 0); // Repete até o usuário escolher sair
}
