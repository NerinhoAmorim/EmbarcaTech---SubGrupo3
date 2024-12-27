#define _WIN32_WINNT 0x0601  // Windows 7 ou superior
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>  // Para lidar com caracteres wide
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
    SetConsoleOutputCP(CP_UTF8);  // Definir a saída do console para UTF-8
    int opcao;

    // Usar wprintf para impressão de texto com caracteres Unicode
    wprintf(L"Bem-vindo ao Conversor de Unidades!\n");

    do {
        wprintf(L"Escolha a categoria de conversão:\n");
        wprintf(L"0. Encerra o programa\n");
        wprintf(L"1. Comprimento\n");
        wprintf(L"2. Massa\n");
        wprintf(L"3. Volume\n");
        wprintf(L"4. Temperatura\n");
        wprintf(L"5. Velocidade\n");
        wprintf(L"6. Potência\n");
        wprintf(L"7. Área\n");
        wprintf(L"8. Tempo\n");
        wprintf(L"9. Digital\n");
        wprintf(L"Digite a opção desejada: ");
        
        // Para entrada de números inteiros, use scanf como normal
        scanf("%d", &opcao);

        switch(opcao) {
            case 0:
                wprintf(L"\n\nEncerrando o conversor\n\n");
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
                ConverterVelocidade();
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
                wprintf(L"Opção inválida!\n");
        }
    } while (1);

    system("pause");

    return 0;
}
