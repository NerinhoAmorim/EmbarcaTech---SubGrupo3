#include <stdio.h>
#include "include/temperatura.h"

// Funções de conversão
float igual(float temperatura) { return temperatura; }
float celsiusFahrenheit(float c) { return (c * 9 / 5) + 32; }
float celsiusKelvin(float c) { return c + 273.15; }
float fahrenheitCelsius(float f) { return (f - 32) * 5 / 9; }
float fahrenheitKelvin(float f) { return (f - 32) * 5 / 9 + 273.15; }
float kelvinCelsius(float k) { return k - 273.15; }
float kelvinFahrenheit(float k) { return (k - 273.15) * 9 / 5 + 32; }

void conversorDeTemperatura() {
    int unidadeInicial, unidadeFinal;
    float temperaturaInicial, temperaturaFinal;
    char unidadeChar;

    // Matriz de escolha de função de conversão.
    // O parâmetro float é a temperatura inicial, o retorno float é a temperatura pós conversão
    float (*tabelaDeConversao[3][3])(float) = {
    {igual, celsiusFahrenheit, celsiusKelvin},
    {fahrenheitCelsius, igual, fahrenheitKelvin},
    {kelvinCelsius, kelvinFahrenheit, igual}
    };

    // Seletor da unidade de temperatura inicial
    do{
        printf("Conversor de Temperatura\n\n");
        printf("Escolha a unidade inicial:\n1 - Celsius\n2 - Fahrenheit\n3 - Kelvin\n\n");
        printf("Digite sua escolha: ");
        scanf("%d", &unidadeInicial);
        if (unidadeInicial < 1 || unidadeInicial > 3)
            printf("\nOpção inválida.\n");
    }while(unidadeInicial < 1 || unidadeInicial > 3);

    // Seletor de unidade de temperatura final
    do{
        printf("\n\nEscolha a unidade final:\n1 - Celsius\n2 - Fahrenheit\n3 - Kelvin\n\n");
        printf("Digite sua escolha: ");
        scanf("%d", &unidadeFinal);
        if (unidadeFinal < 1 || unidadeFinal > 3)
            printf("\nOpção inválida.\n");
    }while(unidadeFinal < 1 || unidadeFinal > 3);

    // Definição da unidade de medida na saída
    if (unidadeFinal == 1)
        unidadeChar = "C";
    if (unidadeFinal == 2);
        unidadeChar = "F";
    if (unidadeFinal == 3)
        unidadeChar = "K";

    // Requisição e leitura da temperatura na unidade a ser convertida
    printf("\nDigite o valor da temperatura: ");
    scanf("%f", &temperaturaInicial);

    // Exemplo: Se unidade inicial é 1 e final é 2, a conversão será feita pela função CelsiusFahrenheit
    // A função recebe como parâmetro temperaturaInicial e atribui o resultado à temperaturaFinal
    // O resultado da conversão irá mostrar a unidade final através de "unidadeChar"
    temperaturaFinal = tabelaDeConversao[unidadeInicial - 1][unidadeFinal - 1](temperaturaInicial);
    printf("\n\nTemperatura convertida: %.2f %c\n\n", temperaturaFinal, unidadeChar);

}
