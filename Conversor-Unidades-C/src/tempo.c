#include <stdio.h>
#include "tempo.h"

// Funções de conversão
float iguall(float tempo) { return tempo; }
float segundosMinutos(float s) { return s / 60.0; }
float segundosHoras(float s) { return s / 3600.0; }
float segundosDias(float s) { return s / 86400.0; }
float minutosSegundos(float m) { return m * 60.0; }
float minutosHoras(float m) { return m / 60.0; }
float minutosDias(float m) { return m / 1440.0; }
float horasSegundos(float h) { return h * 3600.0; }
float horasMinutos(float h) { return h * 60.0; }
float horasDias(float h) { return h / 24.0; }
float diasSegundos(float d) { return d * 86400.0; }
float diasMinutos(float d) { return d * 1440.0; }
float diasHoras(float d) { return d * 24.0; }

void conversorDeTempo() {
    int unidadeInicial, unidadeFinal;
    float tempoInicial, tempoFinal;
    char unidadeChar[3]; // Usando uma string para a unidade final

    // Matriz de escolha de função de conversão.
    // O parâmetro float é o tempo inicial, o retorno float é o tempo pós conversão
    float (*tabelaDeConversao[4][4])(float) = {
        {iguall, segundosMinutos, segundosHoras, segundosDias},
        {minutosSegundos, igual, minutosHoras, minutosDias},
        {horasSegundos, horasMinutos, igual, horasDias},
        {diasSegundos, diasMinutos, diasHoras, igual}
    };

    // Seletor da unidade de tempo inicial
    do {
        printf("Conversor de Tempo\n\n");
        printf("Escolha a unidade inicial:\n1 - Segundos\n2 - Minutos\n3 - Horas\n4 - Dias\n\n");
        printf("Digite sua escolha: ");
        scanf("%d", &unidadeInicial);
        if (unidadeInicial < 1 || unidadeInicial > 4)
            printf("\nOpção inválida.\n");
    } while (unidadeInicial < 1 || unidadeInicial > 4);

    // Seletor de unidade de tempo final
    do {
        printf("\n\nEscolha a unidade final:\n1 - Segundos\n2 - Minutos\n3 - Horas\n4 - Dias\n\n");
        printf("Digite sua escolha: ");
        scanf("%d", &unidadeFinal);
        if (unidadeFinal < 1 || unidadeFinal > 4)
            printf("\nOpção inválida.\n");
    } while (unidadeFinal < 1 || unidadeFinal > 4);

    // Definição da unidade de medida na saída
    if (unidadeFinal == 1)
        sprintf(unidadeChar, "s");
    else if (unidadeFinal == 2)
        sprintf(unidadeChar, "min");
    else if (unidadeFinal == 3)
        sprintf(unidadeChar, "h");
    else if (unidadeFinal == 4)
        sprintf(unidadeChar, "d");

    // Requisição e leitura do tempo na unidade a ser convertida
    printf("\nDigite o valor do tempo: ");
    scanf("%f", &tempoInicial);

    // Exemplo: Se unidade inicial é 1 e final é 2, a conversão será feita pela função segundosMinutos
    // A função recebe como parâmetro tempoInicial e atribui o resultado à tempoFinal
    // O resultado da conversão irá mostrar a unidade final através de "unidadeChar"
    tempoFinal = tabelaDeConversao[unidadeInicial - 1][unidadeFinal - 1](tempoInicial);
    printf("\n\nTempo convertido: %.2f %s\n\n", tempoFinal, unidadeChar);
}
