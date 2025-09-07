#include <stdio.h>

int main(){
    char estado1[50], estado2[50];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;
    float densidade1, densidade2;
    float capita1, capita2;

    // Esta parte do codigo serve para receber os dados das cartas
    printf("Qual o nome do estado da carta 1: \n");
    scanf("%s", &estado1);
    printf("Qual o Código da carta 1: \n");
    scanf("%s", &codigo1);
    printf("Qual o nome da cidade da carta 1: \n");
    scanf("%s", &cidade1);
    printf("Qual é a quantidade de pessoas da carta 1: \n");
    scanf("%d", &populacao1);
    printf("Qual é a Área da carta 1: \n");
    scanf("%f", &area1);
    printf("Qual é o PIB da carta 1: \n");
    scanf("%f", &pib1);
    printf("Qual é a quantidade de pontos turísticos da carta 1: \n");
    scanf("%d", &npt1);

    printf("\nQual o nome do estado da carta 2: \n");
    scanf("%s", &estado2);
    printf("Qual o Código da carta 2: \n");
    scanf("%s", &codigo2);
    printf("Qual o nome da cidade da carta 2: \n");
    scanf("%s", &cidade2);
    printf("Qual é a quantidade de pessoas da carta 2: \n");
    scanf("%d", &populacao2);
    printf("Qual é a Área da carta 2: \n");
    scanf("%f", &area2);
    printf("Qual é o PIB da carta 2: \n");
    scanf("%f", &pib2);
    printf("Qual é a quantidade de pontos turísticos da carta 2: \n");
    scanf("%d", &npt2);

    //Esta parte calcula a Densidade e Capita e precisa ser colocada depois dos inputs
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    capita1 = pib1 / (float) populacao1;
    capita2 = pib2 / (float) populacao2;

    //Esta parte escreve os dados das cartas
    printf("\nCarta 1 - %s: %d\n", estado1, populacao1);
    printf("Carta 2 - %s: %d\n", estado2, populacao2);
    
    //Esta parte compara e exibe quem venceu
    if (populacao1 > populacao2)
    {
        printf("\nPopulação: Carta 1 Venceu!!\n");
    }else{
        printf("\nPopulação: Carta 2 Venceu!!\n");
    }
    
    return 0;
}