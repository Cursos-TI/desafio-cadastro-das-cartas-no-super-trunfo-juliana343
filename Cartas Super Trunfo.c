#include <stdio.h>

int main() {
    // Dados da carta 1
    char estado1[20] = "DF";
    char codigo1[10] = "A61";
    char cidade1[30] = "Brasília";
    int populacao1 = 2817381; // em habitantes
    int turisticos1 = 32; // número de pontos turísticos
    float area1 = 5760784; // em km²
    float densidade1;
    double pib1 = 3288000000000000.0; // em bilhões de reais
    float pibpercapita1;

    // Leitura da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o Código: ");
    scanf("%s", codigo1);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%lf", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turisticos1);

    // Cálculo da densidade e PIB per capita
    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / populacao1;

    // Dados da carta 2
    char estado2[20] = "MG";
    char codigo2[10] = "B32";
    char cidade2[30] = "Simão Pereira";
    int populacao2 = 2947; // em habitantes
    int turisticos2 = 13; // número de pontos turísticos
    float area2 = 135689; // em km²
    float densidade2;
    double pib2 = 103644000; // em bilhões de reais
    float pibpercapita2;

    // Leitura da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o Código: ");
    scanf("%s", codigo2);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%lf", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turisticos2);

    // Cálculo da densidade e PIB per capita
    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;

    // Cálculo do Super Poder
    double superpoder1 = populacao1 + area1 + pib1 + turisticos1 + pibpercapita1 - densidade1;
    double superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pibpercapita2 - densidade2;

    // Impressão dos dados
    printf("\n==============================\n");
    printf("       DADOS DA CARTA 1\n");
    printf("==============================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n==============================\n");
    printf("       DADOS DA CARTA 2\n");
    printf("==============================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Determinar a carta vencedora
    if (superpoder1 > superpoder2) 
        printf("\n A Carta 1 é a vencedora!\n");

    return 0;
}