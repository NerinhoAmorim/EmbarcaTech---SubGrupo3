#ifndef VELOCIDADE_H
#define VELOCIDADE_H

// Definição da estrutura Velocidade
struct Velocidade {
    int tipo;     
    float valor;  
    int tipo2;
};

// Função para cadastrar uma velocidade
struct Velocidade CadastrarVelocidade();

// Função para converter a velocidade de um tipo para outro
void ConverterVelocidade(struct Velocidade v);

#endif
