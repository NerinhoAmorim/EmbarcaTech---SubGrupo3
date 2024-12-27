#include <stdio.h>
#include "include/comprimento.h"

// Funções de conversão
float igual(float valor) { return valor; }
float metrosParaCentimetros(float metros) { return metros * 100.0; }
float metrosParaMilimetros(float metros) { return metros * 1000.0; }
float metrosParaQuilometros(float metros) { return metros / 1000.0; }
float centimetrosParaMetros(float cm) { return cm / 100.0; }
float centimetrosParaMilimetros(float cm) { return cm * 10.0; }
float centimetrosParaQuilometros(float cm) { return cm / 100000.0; }
float milimetrosParaMetros(float mm) { return mm / 1000.0; }
float milimetrosParaCentimetros(float mm) { return mm / 10.0; }
float milimetrosParaQuilometros(float mm) { return mm / 1e6; }
float quilometrosParaMetros(float km) { return km * 1000.0; }
float quilometrosParaCentimetros(float km) { return km * 100000.0; }
float quilometrosParaMilimetros(float km) { return km * 1e6; }

void conversorDeComprimento() {
    int unidadeInicial, unidadeFinal;
    float valorInicial, valorFinal;
    char *unidades[] = {"m", "cm", "mm", "km"};

    // Matriz de escolha de função de conversão
    float (*tabelaDeConversao[4][4])(float) = {
        {igual, metrosParaCentimetros, metrosParaMilimetros, metrosParaQuilometros},
        {centimetrosParaMetros, igual, centimetrosParaMilimetros, centimetrosParaQuilometros},
        {milimetrosParaMetros, milimetrosParaCentimetros, igual, milimetrosParaQuilometros},
        {quilometrosParaMetros, quilometrosParaCentimetros, quilometrosParaMilimetros, igual}
    };

    // Seleção da unidade inicial
    do {
        printf("Conversor de Comprimento\n\n");
        printf("Escolha a unidade inicial:\n1 - Metros (m)\n2 - Centímetros (cm)\n3 - Milímetros (mm)\n4 - Quilômetros (km)\n");
        scanf("%d", &unidadeInicial);
        if (unidadeInicial < 1 || unidadeInicial > 4)
            printf("\nOpção inválida.\n");
    } while (unidadeInicial < 1 || unidadeInicial > 4);

    // Seleção da unidade final
    do {
        printf("\nEscolha a unidade final:\n1 - Metros (m)\n2 - Centímetros (cm)\n3 - Milímetros (mm)\n4 - Quilômetros (km)\n");
        scanf("%d", &unidadeFinal);
        if (unidadeFinal < 1 || unidadeFinal > 4)
            printf("\nOpção inválida.\n");
    } while (unidadeFinal < 1 || unidadeFinal > 4);

    // Solicitação do valor a ser convertido
    printf("\nDigite o valor: ");
    scanf("%f", &valorInicial);

    // Conversão usando a tabela
    valorFinal = tabelaDeConversao[unidadeInicial - 1][unidadeFinal - 1](valorInicial);

    // Exibição do resultado
    printf("\n\nValor convertido: %.2f %s\n\n", valorFinal, unidades[unidadeFinal - 1]);
}