#include <stdio.h>
#include <string.h>  // Para manipulação de strings.

int main() {
    // Definindo as variáveis para a primeira Carta.
    int turisticos1; // Variável para armazenar os pontos turísticos.
    unsigned long int populacao1; // Variável para armazenar a população.
    float area1, pib1; // Variáveis para armazenar a área e o PIB.
    char estado1;  // Variável para armazenar o estado (um único caractere).
    char codigo1[5];  // Variável para armazenar o código (3 caracteres + '\0').
    char cidade1[50];  // Nome da cidade.
    //Definindo as variáveis para Densidade e PIB per Capita.
    float densidade1; // Variável para armazenar a Dencidade Populacional.
    float PibperCapita1; // Variável para armazenar o PIB per Capita.
    float SuperPoder1; // Variável para armazenar o Super Poder.
    float inversodensidade1; // Variável para armazenar o inverso da densidade;

    //Definindo as variáveis para a segunda Carta.
    int turisticos2; // Variável para armazenar os pontos turísticos.
    unsigned long int populacao2; // Variável para armazenar a população.
    float area2, pib2; // Variáveis para armazenar a área e o PIB
    char estado2;  // Variável para armazenar o estado (um único caractere).
    char codigo2[3];  // Variável para armazenar o código (3 caracteres + '\0').
    char cidade2[50];  // Nome da cidade.
    //Definindo as variáveis para Densidade e PIB per Capita.
    float densidade2; // Variável para armazenar a Dencidade Populacional.
    float PibperCapita2; // Variável para armazenar o PIB per Capita.
    float SuperPoder2; // Variável para armazenar o Super Poder.
    float inversodensidade2; // Variável para armazenar o inverso da densidade;

    
    printf("*** Super Trunfo de Países ***\n\n");
    // Cadastro da Carta 1:
    printf("Carta 1:\n");
    printf("Estado: Digite uma letra de 'A' a 'H':\n");
    scanf(" %c", &estado1);  // O espaço antes de %c é para consumir qualquer caractere de nova linha (\n) que possa ter sido deixado na entrada anterior.

    printf("Código: Digite a letra do Estado seguida de um número de '01' a '04'(ex: A01, B03):\n");
    scanf("%s", &codigo1);  // Lê o código da cidade (3 caracteres).

    printf("Digite o nome da cidade:\n");
    scanf("%s",&cidade1);  // Lê o nome da cidade (sem espaços).

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao1); // Lê o número de habitantes.

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area1); // Lê a área da cidade.

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1); // Lê o PIB da cidade.

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos1); // Lê a quantidade de pontos turísticos.

    densidade1 = populacao1 / area1; // Calculando a Densidade Populacional.

    PibperCapita1 = pib1 / populacao1; // Calculando o PIB per Capita.

    //inversodensidade1 = densidade1 > densidade2;
    //SuperPoder1 = ((float)populacao1 + area1 + pib1 + (float)turisticos1 + PibperCapita1 + inversodensidade1);

    // Exibição dos Dados da primeira Carta:
    printf("\nCarta 1:\n"); // Exibindo a Carta 1.
    printf("Estado: %c\n", estado1); // Exibindo o estado.
    printf("Código: %s\n", codigo1); // Exibindo o código.
    printf("Cidade: %s\n", cidade1);  // Exibindo o nome da cidade.
    printf("População: %d\n", populacao1); // Exibindo a população.
    printf("Área: %.2f km²\n", area1); // Exibindo a área.
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibindo o PIB.
    printf("Pontos turísticos: %d\n", turisticos1); // Exibindo os pontos turísticos.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); //Exibindo a densidade.
    printf("PIB per Capita: %.2f reais\n\n", PibperCapita1); // Exibindo o PIB per Capita e pulando 2 linhas.

    //Cadastro da Carta 2.
    printf("Carta 2:\n");
    printf("Estado: Digite uma letra de 'A' a 'H':\n");
    scanf(" %c", &estado2);  // O espaço antes de %c é para consumir qualquer caractere de nova linha (\n) que possa ter sido deixado na entrada anterior.

    printf("Código: Digite a letra do Estado seguida de um número de '01' a '04'(ex: A01, B03):\n");
    scanf("%s", &codigo2);  // Lê o código da cidade (3 caracteres).

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);  // Lê o nome da cidade (sem espaços).

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao2); // Lê o número de habitantes.

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area2); // Lê a área da cidade.

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2); // Lê o PIB da cidade.

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos2); // Lê a quantidade de pontos turísticos.

    densidade2 = populacao2 / area2; // Calculando a Densidade Populacional.

    PibperCapita2 = pib2 / populacao2; // Calculando o PIB per Capita.
    

    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2:\n"); // Exibindo a carta 2.
    printf("Estado: %c\n", estado2);  // Exibindo o estado.
    printf("Código: %s\n", codigo2); // Exibindo o código.
    printf("Cidade: %s\n", cidade2);  // Exibindo o nome da cidade.
    printf("População: %d\n", populacao2); // Exibindo a população.
    printf("Área: %.2f km²\n", area2); // Exibindo a área.
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibindo o PIB.
    printf("Pontos turísticos: %d\n", turisticos2); // Exibindo os pontos turísticos.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); //Exibindo a densidade.
    printf("PIB per Capita: %.2f reais\n", PibperCapita2); // Exibindo o PIB per Capita.

    // Calculando o inverso da densidade e o Super Poder de cada carta;
    inversodensidade1 = densidade1 < densidade2; 
    SuperPoder1 = ((float)populacao1 + area1 + pib1 + (float)turisticos1 + PibperCapita1 + inversodensidade1);

    inversodensidade2 = densidade2 < densidade1;
    SuperPoder2 = ((float)populacao2 + area2 + pib2 + (float)turisticos2 + PibperCapita2 + inversodensidade2);

    // Exibido a Comparação das Cartas e mostrando qual venceu;
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu: %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu: %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu: %d\n", pib1 > pib2);
    printf("Pontos turísticos: Carta 1 venceu: %d\n", turisticos1 > turisticos2);
    printf("Densidade Populacional: Carta 2 venceu: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu: %d\n", PibperCapita1 > PibperCapita2);
    printf("Super Poder: Carta 1 venceu: %d\n\n", SuperPoder1 > SuperPoder2);

    if(populacao1 > populacao2){
        printf("Carta 1(São Paulo) venceu!\n");
    } else {
        printf("Carta 2 (Rio de Janeiro) venceu!\n");
    }

    return 0;
}