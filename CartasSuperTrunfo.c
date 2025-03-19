#include <stdio.h>
#include <string.h>  // Para manipulação de strings

int main() {
    // Definindo as variáveis para a primeira Carta.
    int populacao1, turisticos1;
    float area1, pib1;
    char estado1;  // Variável para armazenar o estado (um único caractere)
    char codigo1[3];  // Variável para armazenar o código (2 caracteres + '\0')
    char cidade1[50];  // Nome da cidade
    char codigoCompleto[6];  // Para armazenar a concatenação do estado e código (1 caractere + 2 caracteres + '\0')
    
    //Definindo as variáveis para a segunda Carta.
    int populacao2, turisticos2;
    float area2, pib2;
    char estado2;  // Variável para armazenar o estado (um único caractere)
    char codigo2[3];  // Variável para armazenar o código (2 caracteres + '\0')
    char cidade2[50];  // Nome da cidade
    char codigoCompleto2[6];  // Para armazenar a concatenação do estado e código (1 caractere + 2 caracteres + '\0')

    // Cadastro da Carta 1:
    printf("Carta 1:\n");
    printf("Estado: Digite uma letra de 'A' a 'H':\n");
    scanf(" %c", &estado1);  // O espaço antes de %c é para consumir qualquer caractere de nova linha (\n) que possa ter sido deixado na entrada anterior.

    printf("Código: Digite um número de '01' a '04':\n");
    scanf("%s", codigo1);  // Lê o código da cidade (2 caracteres).

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);  // Lê o nome da cidade (sem espaços).

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao1); // Lê o numero de habitantes.

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area1); // Lê a área da cidade.

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1); // Lê o PIB da cidade.

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos1); // Lê a quantidade de pontos turísticos.

    // Concatenando o estado e código
    snprintf(codigoCompleto, sizeof(codigoCompleto), "%c%s", estado1, codigo1);  // Usando snprintf para concatenar

    
    // Exibição dos Dados da primeira Carta:
    printf("\nCarta 1:\n");
    
     // Exibindo o estado completo (por extenso) com a letra do estado
    printf("Estado: %c\n", estado1);  // Exibindo apenas o estado
    // Exibindo o estado + código concatenados
    printf("Código: %s\n", codigoCompleto);  // Exibindo o estado e o código concatenados
    // Exibindo o nome da cidade
    printf("Cidade: %s\n", cidade1);  // Exibindo o nome da cidade

    // Exibindo os outros dados
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n\n", turisticos1);

    //Cadastro da Carta 2.
    printf("Carta 2:\n");
    printf("Estado: Digite uma letra de 'A' a 'H':\n");
    scanf(" %c", &estado2);  // O espaço antes de %c é para consumir qualquer caractere de nova linha (\n) que possa ter sido deixado na entrada anterior.

    printf("Código: Digite um número de '01' a '04':\n");
    scanf("%s", codigo2);  // Lê o código da cidade (2 caracteres)

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);  // Lê o nome da cidade (sem espaços)

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos2);

    // Concatenando o estado e código
    snprintf(codigoCompleto2, sizeof(codigoCompleto2), "%c%s", estado2, codigo2);  // Usando snprintf para concatenar
    
    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2:\n");
    
     // Exibindo o estado completo (por extenso) com a letra do estado
    printf("Estado: %c\n", estado2);  // Exibindo apenas o estado
    // Exibindo o estado + código concatenados
    printf("Código: %s\n", codigoCompleto2);  // Exibindo o estado e o código concatenados
    // Exibindo o nome da cidade
    printf("Cidade: %s\n", cidade2);  // Exibindo o nome da cidade

    // Exibindo os outros dados
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);

    return 0;
}