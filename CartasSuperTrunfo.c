#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo!\n");
    char estado[20] = "DF";
    char codigo[10] = "A61";
    int populacao = (3117381);
    float area = 5760784;
    char cidade[20] = "Brasília";
    float pib = 32880000000000000;
    int turisticos = 32;

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo: \n");
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