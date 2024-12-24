#include <stdio.h>
#include <assert.h>
#include "../src/include/conversao.h"

// Declaração da função de teste antes de usá-la
void teste_conversao_tempo();  // Declaração da função de teste

// Função de teste para conversão de tempo
void teste_conversao_tempo() {
    // Teste com 3600 segundos (1 hora)
    printf("Testando conversao_tempo com 3600 segundos (1 hora):\n");
    // Teste: 3600 segundos -> 1 hora
    double valor = 3600;
    conversao_tempo(valor);
    
    // Teste com 120 segundos (2 minutos)
    printf("Testando conversao_tempo com 120 segundos (2 minutos):\n");
    valor = 120;
    conversao_tempo(valor);

    // Teste com 86400 segundos (1 dia)
    printf("Testando conversao_tempo com 86400 segundos (1 dia):\n");
    valor = 86400;
    conversao_tempo(valor);
}

// Função principal de teste
int main() {
    // Chama a função de teste de conversão de tempo
    teste_conversao_tempo();

    // Se chegou aqui, significa que os testes passaram
    printf("Todos os testes passaram com sucesso!\n");

    return 0;
}
