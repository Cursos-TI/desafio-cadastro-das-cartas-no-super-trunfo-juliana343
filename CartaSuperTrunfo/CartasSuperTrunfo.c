#include <stdio.h>

int main(){
    //Desafio 1-Cartas do Super Trunfo
    printf("Desafio 1-Cartas do Super Trunfo!\n");
    char estado1[20] = "MG";
    char codigo1[10] = "A12";
    int populacao1 = 93073;
    float area1 = 294835;
    char cidade1[20] = "Ibatubá";
    float pib1 = 2390802;
    int turisticos1 = 10;

    printf("Digite o nome do estado: \n");
    scanf("%s", estado1);

    printf("Digite o código do estado: \n");
    scanf("%s", codigo1);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao1);

    printf("Digite a área do estado: \n");
    scanf("%f", &area1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turisticos1);

    //Desafio 2-Cartas do Super Trunfo
    printf("\nDesafio 2-Cartas do Super Trunfo!\n");
    char estado2[20] = "MG";
    char codigo2[10] = "B34";
    int populacao2 = 1392;
    float area2 = 193141;
    char cidade2[20] = "Grupiara";
    float pib2 = 2873100;
    int turisticos2 = 8;

    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);

    printf("Digite o código do estado: \n");
    scanf("%s", codigo2);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao2);

    printf("Digite a área do estado: \n");
    scanf("%f", &area2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos2);

    return 0;

}