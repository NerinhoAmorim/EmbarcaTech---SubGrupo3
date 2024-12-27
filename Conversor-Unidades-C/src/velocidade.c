#include <stdio.h>
#include "include/velocidade.h"

void ConverterVelocidade() {
    float conver, valor;
    int tipo, tipo2;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Escolha o tipo de medida:\n");
    printf("1 - km/h  2 - m/s  3 - mph\n");
    scanf("%d", &tipo);

    printf("Para qual medida você vai querer converter:\n");
    printf("1 - km/h  2 - m/s  3 - mph\n");
    scanf("%d", &tipo2);

    if (tipo == 1 && tipo2 == 1) {
        conver = valor;
        printf("%.2f km/h\n", conver);
    } else if (tipo == 1 && tipo2 == 2) {
        conver = valor / 3.6;
        printf("%.2f m/s\n", conver);
    } else if (tipo == 1 && tipo2 == 3) {
        conver = valor / 1.609;
        printf("%.2f mph\n", conver);
    } else if (tipo == 2 && tipo2 == 1) {
        conver = valor * 3.6;
        printf("%.2f km/h\n", conver);
    } else if (tipo == 2 && tipo2 == 2) {
        conver = valor;
        printf("%.2f m/s\n", conver);
    } else if (tipo == 2 && tipo2 == 3) {
        conver = valor * 2.237;
        printf("%.2f mph\n", conver);
    } else if (tipo == 3 && tipo2 == 1) {
        conver = valor * 1.609;
        printf("%.2f km/h\n", conver);
    } else if (tipo == 3 && tipo2 == 2) {
        conver = valor / 2.237;
        printf("%.2f m/s\n", conver);
    } else {
        conver = valor;
        printf("%.2f mph\n", conver);
    }
}
