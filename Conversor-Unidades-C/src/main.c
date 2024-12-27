#define _WIN32_WINNT 0x0601  // Windows 7 ou superior
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/tempo.h"
#include "include/massa.h"
#include "include/potencia.h"
#include "include/temperatura.h"
#include "include/comprimento.h"
#include "include/area.h"
#include "include/volume.h"
#include "include/dados.h"
#include "include/velocidade.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int opcao;

    printf("Bem-vindo ao Conversor de Unidades!\n");

    do {
        printf("Escolha a categoria de conversão:\n");
        printf("0. Encerra o programa\n");
        printf("1. Comprimento\n");
        printf("2. Massa\n");
        printf("3. Volume\n");
        printf("4. Temperatura\n");
        printf("5. Velocidade\n");
        printf("6. Potência\n");
        printf("7. Área\n");
        printf("8. Tempo\n");
        printf("9. Digital\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 0:
                printf("\n\nEncerrando o conversor\n\n");
                system("pause");
                exit(0);
            case 1:
                conversorDeComprimento();
                break;
            case 2:
                Conversao_de_massa();
                break;
            case 3:
                converterVolume();
                break;
            case 4:
                conversorDeTemperatura();
                break;
            case 5: {
                struct Velocidade v;
                ConverterVelocidade(v);
                break;
            }
            case 6:
                Conversao_de_Potencia();
                break;
            case 7:
                processar_conversao_areas();
                break;
            case 8:
                conversorDeTempo();
                break;
            case 9:
                converter_dados();
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (1);

    system("pause");

    return 0;
}
