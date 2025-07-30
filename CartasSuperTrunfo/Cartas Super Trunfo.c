#include <stdio.h>

int main(){
    // Carta 1
    printf("Desafio 1 - Cartas do Super Trunfo!\n");
    
    char estado1[20] = "DF";
    char codigo1[10] = "A61";
    int populacao1 = 2817381;
    float area1 = 5760784;
    char cidade1[30] = "Brasília";
    double pib1 = 3288000000000000.0;
    int turisticos1 = 33;

    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado1);

    printf("Digite o codigo: \n");
    scanf("%s", codigo1);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao1);

    printf("Digite a área do estado: \n");
    scanf("%f", &area1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite o PIB do estado: \n");
    scanf("%lf", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turisticos1);

    // Carta 2
    printf("\nDesafio 2 - Cartas do Super Trunfo!\n");

    char estado2[20] = "MG";
    char codigo2[10] = "B32";
    int populacao2 = 2947;
    float area2 = 135689;
    char cidade2[30] = "Simão Pereira";
    double pib2 = 103644000;
    int turisticos2 = 13;

    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o PIB do estado: \n");
    scanf("%lf", &pib2);

    printf("Digite o nomero de pontos turisticos: \n");
    scanf("%d", &turisticos2);

    // Impressão dos dados
    printf("\n==============================\n");
    printf("        DADOS DA CARTA 1\n");
    printf("==============================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);

    printf("\n==============================\n");
    printf("        DADOS DA CARTA2\n");
    printf("==============================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Àrea: %.2f km²\n", area2);
    printf("PIB: %.2lf milhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);

    return 0;

}