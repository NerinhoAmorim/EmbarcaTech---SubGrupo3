void Conversao_de_massa() {
    double valor; // Declarando variável que irá receber o valor a ser convertido
    int opc; // Declarando variável que irá receber a opção de conversão 

    printf("Digite o valor a ser convertido: "); // Solicitando ao usuário o valor a ser convertido  
    scanf("%lf", &valor); // Atribuindo o valor inserido pelo usuário à variável 'valor'

    printf("Selecione a conversão:\n");
    printf("1 - (kg) -> (g)\n");
    printf("2 - (kg) -> (t)\n");
    printf("3 - (g) -> (kg)\n");
    printf("4 - (g) -> (t)\n");
    printf("5 - (t) -> (kg)\n");
    printf("6 - (t) -> (g)\n");
    printf("Digite a opção: ");
    scanf("%d", &opc); // Atribuindo a opção inserida pelo usuário à variável 'opc'

    switch (opc) { // Escolhendo a conversão com base na opção fornecida
        case 1: // Quilograma para grama 
            printf("%.2f kg equivale a %.9f g\n", valor, valor * 1000); // Convertendo de kg para g
            break;
        case 2: // Quilograma para tonelada 
            printf("%.2f kg equivale a %.9f t\n", valor, valor / 1000); // Convertendo de kg para t
            break;
        case 3: // Grama para quilograma 
            printf("%.2f g equivale a %.9f kg\n", valor, valor / 1000); // Convertendo de g para kg
            break;
        case 4: // Grama para tonelada 
            printf("%.2f g equivale a %.9f t\n", valor, valor / 1000000); // Convertendo de g para t
            break;
        case 5: // Tonelada para quilograma
            printf("%.2f t equivale a %.9f kg\n", valor, valor * 1000); // Convertendo de t para kg
            break;            
        case 6: // Tonelada para grama
            printf("%.2f t equivale a %.9f g\n", valor, valor * 1000000); // Convertendo de t para g
            break; 
        default: // Opção inválida
            printf("Opção inválida!\n");
    }
}