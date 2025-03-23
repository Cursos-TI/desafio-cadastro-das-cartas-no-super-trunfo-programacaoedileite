#include <stdio.h>
#include <string.h>  // Para manipulação de strings.

int main() {
    // Definindo as variáveis para a primeira Carta.
    int populacao1, turisticos1; // Variáveis para armazenar a população e pontos turísticos.
    float area1, pib1; // Variáveis para armazenar a área e o PIB.
    char estado1;  // Variável para armazenar o estado (um único caractere).
    char codigo1[5];  // Variável para armazenar o código (3 caracteres + '\0').
    char cidade1[50];  // Nome da cidade.

    //Definindo as variáveis para a segunda Carta.
    int populacao2, turisticos2; // Variáveis para armazenar a população e pontos turísticos.
    float area2, pib2; // Variáveis para armazenar a área e o PIB
    char estado2;  // Variável para armazenar o estado (um único caractere).
    char codigo2[5];  // Variável para armazenar o código (3 caracteres + '\0').
    char cidade2[50];  // Nome da cidade.

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

    
    // Exibição dos Dados da primeira Carta:
    printf("\nCarta 1:\n"); // Exibindo a Carta 1.
    printf("Estado: %c\n", estado1); // Exibindo o estado.
    printf("Código: %s\n", codigo1); // Exibindo o código.
    printf("Cidade: %s\n", cidade1);  // Exibindo o nome da cidade.
    printf("População: %d\n", populacao1); // Exibindo a população.
    printf("Área: %.2f km²\n", area1); // Exibindo a área.
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibindo o PIB.
    printf("Pontos turísticos: %d\n\n", turisticos1); // Exibindo os pontos turísticos e pulando 2 linhas.

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
    

    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2:\n"); // Exibindo a carta 2.
    printf("Estado: %c\n", estado2);  // Exibindo o estado.
    printf("Código: %s\n", codigo2); // Exibindo o código.
    printf("Cidade: %s\n", cidade2);  // Exibindo o nome da cidade.
    printf("População: %d\n", populacao2); // Exibindo a população.
    printf("Área: %.2f km²\n", area2); // Exibindo a área.
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibindo o PIB.
    printf("Pontos turísticos: %d\n", turisticos2); // Exibindo os pontos turísticos.

    return 0;
}