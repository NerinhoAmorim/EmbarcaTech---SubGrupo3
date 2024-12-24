 #include <stdio.h>
#include "include/conversao.h"

// Função de conversão de comprimento
void conversao_comprimento(double valor) {
    printf("Conversão de comprimento: %.2f metros\n", valor);
    // Adicione as conversões de comprimento aqui
}

// Função de conversão de massa
void conversao_massa(double valor) {
    printf("Conversão de massa: %.2f quilogramas\n", valor);
    // Adicione as conversões de massa aqui
}

// Função de conversão de volume
void conversao_volume(double valor) {
    printf("Conversão de volume: %.2f litros\n", valor);
    // Adicione as conversões de volume aqui
}

// Função de conversão de temperatura
void conversao_temperatura(double valor) {
    printf("Conversão de temperatura: %.2f Celsius\n", valor);
    // Adicione as conversões de temperatura aqui
}

// Função de conversão de velocidade
void conversao_velocidade(double valor) {
    printf("Conversão de velocidade: %.2f km/h\n", valor);
    // Adicione as conversões de velocidade aqui
}

// Função de conversão de potência
void conversao_potencia(double valor) {
    printf("Conversão de potência: %.2f watts\n", valor);
    // Adicione as conversões de potência aqui
}

// Função de conversão de área
void conversao_area(double valor) {
    printf("Conversão de área: %.2f metros quadrados\n", valor);
    // Adicione as conversões de área aqui
}

// Função de conversão de tempo
void conversao_tempo(double valor) {
    // Conversões de segundos para outras unidades
    double segundos = valor;
    double minutos = valor / 60.0;
    double horas = valor / 3600.0;
    double dias = valor / 86400.0;

    // Exibe o valor em diferentes unidades de tempo
    printf("Conversão de tempo: %.2f segundos\n", segundos);
    printf("Em minutos: %.2f minutos\n", minutos);
    printf("Em horas: %.2f horas\n", horas);
    printf("Em dias: %.2f dias\n", dias);
}

// Função de conversão de dados
void conversao_dados(double valor) {
    printf("Conversão de dados: %.2f bytes\n", valor);
    // Adicione as conversões de dados aqui
}