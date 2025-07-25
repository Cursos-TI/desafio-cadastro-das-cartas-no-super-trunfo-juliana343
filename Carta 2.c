#include <stdio.h>

int main(){
    printf("Desafio 2 Super Trunfo!\n");
    char estado[20] = "MG";
    char codigo[10] = "B32";
    int populacao = 2618;
    float area = 1336;
    char cidade[20] = "Simao Pereira";
    float pib = 103644000;
    int turisticos = 13;

    printf("Digite o nome do estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo do estado: \n");
    scanf("%s", codigo);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &turisticos);

    return 0;

}