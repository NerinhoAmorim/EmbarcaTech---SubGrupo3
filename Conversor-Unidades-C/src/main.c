#include <stdio.h>
#include "include/tempo.h"
#include "include/massa.h"
#include "include/potencia.h"
#include "include/temperatura.h"
#include "include/comprimento.h"

int main() {
    int opcao;
    double valor;

    printf("Bem-vindo ao Conversor de Unidades!\n");
    printf("Escolha a categoria de conversão:\n");
    printf("1. Comprimento\n");
    printf("2. Massa\n");
    printf("3. Volume\n");
    printf("4. Temperatura\n");
    printf("5. Velocidade\n");
    printf("6. Potência\n");
    printf("7. Área\n");
    printf("8. Tempo\n");
    printf("9. Dados\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch(opcao) {
        case 1:
            // Função de conversão de comprimento
            conversao_comprimento(valor);
            break;
        case 2:
            // Função de conversão de massa
            Conversao_de_massa(valor);
            break;
        case 3:
            // Função de conversão de volume
            conversao_volume(valor);
            break;
        case 4:
            // Função de conversão de temperatura
            conversorDeTemperatura(valor);
            break;
        case 5:
            // Função de conversão de velocidade
            conversao_velocidade(valor);
            break;
        case 6:
            // Função de conversão de potência
            Conversao_de_Potencia(valor);
            break;
        case 7:
            // Função de conversão de área
            conversao_area(valor);
            break;
        case 8:
            // Função de conversão de tempo
            conversorDeTempo(valor);
            break;
        case 9:
            // Função de conversão de dados
            conversao_dados(valor);
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}