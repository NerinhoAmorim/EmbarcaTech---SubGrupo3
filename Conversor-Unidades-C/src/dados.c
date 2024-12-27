#include <stdio.h>
#include "include/dados.h"

double b_kb(double bytes) {
    return bytes / 1024.0;
}

double b_mb(double bytes) {
    return bytes / (1024.0 * 1024.0);
}

double b_gb(double bytes) {
    return bytes / (1024.0 * 1024.0 * 1024.0);
}

double kb_b(double kilobytes) {
    return kilobytes * 1024.0;
}

double kb_mb(double kilobytes) {
    return kilobytes / 1024.0;
}

double kb_gb(double kilobytes) {
    return kilobytes / (1024.0 * 1024.0);
}

double mb_b(double megabytes) {
    return megabytes * 1024.0 * 1024.0;
}

double mb_kb(double megabytes) {
    return megabytes * 1024.0;
}

double mb_gb(double megabytes) {
    return megabytes / 1024.0;
}

double gb_b(double gigabytes) {
    return gigabytes * 1024.0 * 1024.0 * 1024.0;
}

double gb_kb(double gigabytes) {
    return gigabytes * 1024.0 * 1024.0;
}

double gb_mb(double gigabytes) {
    return gigabytes * 1024.0;
}

void converter_dados() {
    double resultado,valor;
    int opcao;

    printf("Escolha a opção de conversao:\n");
    printf("1. Byte -> KB\n");
    printf("2. Byte -> MB\n");
    printf("3. Byte -> GB\n");
    printf("4. KB -> Byte\n");
    printf("5. KB -> MB\n");
    printf("6. KB -> GB\n");
    printf("7. MB -> Byte\n");
    printf("8. MB -> KB\n");
    printf("9. MB -> GB\n");
    printf("10. GB -> Byte\n");
    printf("11. GB -> KB\n");
    printf("12. GB -> MB\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor");
    scanf("%lf", &valor);

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