#include <stdio.h>
#include "include/velocidade.h"

struct Velocidade {
    int tipo;
    float valor;
    int tipo2;
};

struct Velocidade CadastrarVelocidade() {
    struct Velocidade v;

    printf("Digite o valor: ");
    scanf("%f", &v.valor);

    printf("Escolha o tipo de medida:\n");
    printf("1 - km/h  2 - m/s  3 - mph\n");
    scanf("%d", &v.tipo);

    printf("Para qual medida você vai querer converter:\n");
    printf("1 - km/h  2 - m/s  3 - mph\n");
    scanf("%d", &v.tipo2);

    return v;
}

void ConverterVelocidade(struct Velocidade v) {
    float conver;

    if (v.tipo == 1 && v.tipo2 == 1) {
        conver = v.valor;
        printf("%.2f km/h\n", conver);
    } else if (v.tipo == 1 && v.tipo2 == 2) {
        conver = v.valor / 3.6;
        printf("%.2f m/s\n", conver);
    } else if (v.tipo == 1 && v.tipo2 == 3) {
        conver = v.valor / 1.609;
        printf("%.2f mph\n", conver);
    } else if (v.tipo == 2 && v.tipo2 == 1) {
        conver = v.valor * 3.6;
        printf("%.2f km/h\n", conver);
    } else if (v.tipo == 2 && v.tipo2 == 2) {
        conver = v.valor;
        printf("%.2f m/s\n", conver);
    } else if (v.tipo == 2 && v.tipo2 == 3) {
        conver = v.valor * 2.237;
        printf("%.2f mph\n", conver);
    } else if (v.tipo == 3 && v.tipo2 == 1) {
        conver = v.valor * 1.609;
        printf("%.2f km/h\n", conver);
    } else if (v.tipo == 3 && v.tipo2 == 2) {
        conver = v.valor / 2.237;
        printf("%.2f m/s\n", conver);
    } else {
        conver = v.valor;
        printf("%.2f mph\n", conver);
    }
}
