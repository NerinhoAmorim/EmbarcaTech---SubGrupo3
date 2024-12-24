#include <stdio.h>
#include <assert.h>
#include "../src/include/tempo.h"

// Função de teste para conversão de tempo
void teste_conversao_tempo() {
    float resultado;

    // Teste: 3600 segundos -> 1 hora
    resultado = conversao_tempo(3600, 3); // 3 = Horas
    assert(resultado == 1);
    printf("Teste 1 (3600 segundos -> 1 hora): Passou\n");

    // Teste: 120 segundos -> 2 minutos
    resultado = conversao_tempo(120, 2); // 2 = Minutos
    assert(resultado == 2);
    printf("Teste 2 (120 segundos -> 2 minutos): Passou\n");

    // Teste: 86400 segundos -> 24 horas
    resultado = conversao_tempo(86400, 3); // 3 = Horas
    assert(resultado == 24);
    printf("Teste 3 (86400 segundos -> 24 horas): Passou\n");
}

// Função principal de teste
int main() {
    teste_conversao_tempo();

    // Se chegou aqui, significa que os testes passaram
    printf("Todos os testes passaram com sucesso!\n");

    return 0;
}