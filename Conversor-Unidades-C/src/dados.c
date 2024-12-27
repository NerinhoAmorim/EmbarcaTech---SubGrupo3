#include <stdio.h>
#include "dados.h"

void converter_dados(int opcao, double valor) {
    double resultado;

    switch (opcao) {
        case 1: // byte -> KB
            resultado = b_kb(valor);
            printf("Resultado: %.2lf KB\n", resultado);
            break;

        case 2: // byte -> MB
            resultado = b_mb(valor);
            printf("Resultado: %.2lf MB\n", resultado);
            break;

        case 3: // byte -> GB
            resultado = b_gb(valor);
            printf("Resultado: %.2lf GB\n", resultado);
            break;

        case 4: // KB -> byte
            resultado = kb_b(valor);
            printf("Resultado: %.2lf bytes\n", resultado);
            break;

        case 5: // KB -> MB
            resultado = kb_mb(valor);
            printf("Resultado: %.2lf MB\n", resultado);
            break;

        case 6: // KB -> GB
            resultado = kb_gb(valor);
            printf("Resultado: %.2lf GB\n", resultado);
            break;

        case 7: // MB -> byte
            resultado = mb_b(valor);
            printf("Resultado: %.2lf bytes\n", resultado);
            break;

        case 8: // MB -> KB
            resultado = mb_kb(valor);
            printf("Resultado: %.2lf KB\n", resultado);
            break;

        case 9: // MB -> GB
            resultado = mb_gb(valor);
            printf("Resultado: %.2lf GB\n", resultado);
            break;

        case 10: // GB -> byte
            resultado = gb_b(valor);
            printf("Resultado: %.2lf bytes\n", resultado);
            break;

        case 11: // GB -> KB
            resultado = gb_kb(valor);
            printf("Resultado: %.2lf KB\n", resultado);
            break;

        case 12: // GB -> MB
            resultado = gb_mb(valor);
            printf("Resultado: %.2lf MB\n", resultado);
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }
}