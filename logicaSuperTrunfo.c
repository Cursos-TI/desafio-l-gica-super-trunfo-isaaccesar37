#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1[3], codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;

    // Declaração de variáveis para a Carta 2
    char estado2[3], codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    // Entrada de dados para a Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e do PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // Conversão de PIB para reais
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Atributo escolhido para comparação: População (pode alterar para outro atributo)
    printf("\nComparação de cartas (Atributo: População):\n");

    // Comparação e exibição do resultado
    if (populacao1 > populacao2) {
        printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Empate!\n");
    }

    return 0;
}
