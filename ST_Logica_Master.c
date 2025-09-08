#include <stdio.h>

int main(){
    int opcao, populacao1, populacao2, npt1, npt2, atributo1, atributo2;
    int resultado1 = 0, resultado2 = 0, resultado3 = 0, resultado4 = 0;
    char pais1[50], pais2[50];
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2;

    // Esta parte do codigo serve para receber os dados das cartas
    printf("Qual o nome do País da carta 1: \n");
    scanf("%s", &pais1);
    printf("Qual é a quantidade de pessoas da carta 1: \n");
    scanf("%d", &populacao1);
    printf("Qual é a Área da carta 1: \n");
    scanf("%f", &area1);
    printf("Qual é o PIB da carta 1: \n");
    scanf("%f", &pib1);
    printf("Qual é a quantidade de pontos turísticos da carta 1: \n");
    scanf("%d", &npt1);

    printf("\nQual o nome do País da carta 2: \n");
    scanf("%s", &pais2);
    printf("Qual é a quantidade de pessoas da carta 2: \n");
    scanf("%d", &populacao2);
    printf("Qual é a Área da carta 2: \n");
    scanf("%f", &area2);
    printf("Qual é o PIB da carta 2: \n");
    scanf("%f", &pib2);
    printf("Qual é a quantidade de pontos turísticos da carta 2: \n");
    scanf("%d", &npt2);

    //Esta parte calcula a Densidade e precisa ser colocada depois dos inputs
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    printf("\n%s \n", pais1);
    printf("%s \n", pais2);

    //Menu para decidir quais atributos vão batalhar
    printf("\nEscolha qual dos atributos vão batalha!!\n");
    printf("1.População.\n");
    printf("2.Área.\n");
    printf("3.PIB.\n");
    printf("4.Número de pontos turisticos.\n");
    printf("5.Densidade Demográfica.\n");
    printf("Escolha o primeiro atributo:\n");
    scanf("%d", &atributo1);
    
    switch (atributo1){
        case 1:
            printf("\nPopulação foi escolhido.\n");
            printf("\nO valor da população da carta 1 é : %d \n", populacao1);
            printf("O valor da população da carta 2 é : %d \n", populacao2);
            if (populacao1 > populacao2){
                resultado1 = populacao1 > populacao2 ? 1 : 0;
            }else if (populacao2 > populacao1){
                resultado2 = populacao2 > populacao1 ? 1 : 0;
            }else{
                resultado1 == resultado2;
            }
            
        break;
        case 2:
            printf("\nÁrea foi escolhido.\n");
            printf("\nO valor da área da carta 1 é: %f km²\n", area1);
            printf("O valor da área da carta 2 é: %f km²\n", area2);
           if (area1 > area2){
                resultado1 = area1 > area2 ? 1 : 0;
            }else if (area2 > area1){
                resultado2 = area2 > area1 ? 1 : 0;
            }else{
                resultado1 == resultado2;
            }
        break;
        case 3:
            printf("\nPIB foi escolhido.\n");
            printf("\nO valor do PIB da carta 1 é: %f\n", pib1);
            printf("O valor do PIB da carta 2 é: %f\n", pib2);
            if (pib1 > pib2){
                resultado1 = pib1 > pib2 ? 1 : 0;
            }else if (pib2 > pib1){
                resultado2 = pib2 > pib1 ? 1 : 0;
            }else{
                resultado1 == resultado2;
            }
        break;
        case 4:
            printf("\nNumero de Pontos Turisticos foi Escolhido.\n");
            printf("\nA quantidade de Pontos Turisticos da carta 1 é: %d \n",npt1);
            printf("A quantidade de Pontos Turisticos da carta 2 é: %d \n",npt2);
            if (npt1 > npt2){
                resultado1 = npt1 > npt2 ? 1 : 0;
            }else if (npt2 > npt1){
                resultado2 = npt2 > npt1 ? 1 : 0;
            }else{
                resultado1 == resultado2;
            }
        break;   
        case 5:
            printf("\nDensidade Demográfica foi escolhido.\n");
            printf("\nA Densidade Demográfica da carta 1 é: %f\n", densidade1);
            printf("A Densidade Demográfica da carta 2 é: %f\n", densidade2);
            if (densidade1 < densidade2){
                resultado1 = densidade1 < densidade2 ? 1 : 0;
            }else if (densidade2 < densidade1){
                resultado2 = densidade2 < densidade1 ? 1 : 0;
            }else{
                resultado1 == resultado2;
            }
        break;
        default:
            printf("\nNumero invalido.\n");
    }
    
    printf("\nEscolha qual dos atributos vão batalha!!\n");
    printf("1.População.\n");
    printf("2.Área.\n");
    printf("3.PIB.\n");
    printf("4.Número de pontos turisticos.\n");
    printf("5.Densidade Demográfica.\n");
    printf("Escolha o segundo atributo:\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2){
        printf("Você escoçheu o mesmo atributo!");
    }else{
        switch (atributo2){
        case 1:
            printf("\nPopulação foi escolhido.\n");
            printf("\nO valor da população da carta 1 é : %d \n", populacao1);
            printf("O valor da população da carta 2 é : %d \n", populacao2);
            if (populacao1 > populacao2){
                resultado1 = populacao1 > populacao2 ? 1 : 0;
            }else if (populacao2 > populacao1){
                resultado4 = populacao2 > populacao1 ? 1 : 0;
            }else{
                resultado3 == resultado4;
            }
            
        break;
        case 2:
            printf("\nÁrea foi escolhido.\n");
            printf("\nO valor da área da carta 1 é: %f km²\n", area1);
            printf("O valor da área da carta 2 é: %f km²\n", area2);
           if (area1 > area2){
                resultado3 = area1 > area2 ? 1 : 0;
            }else if (area2 > area1){
                resultado4 = area2 > area1 ? 1 : 0;
            }else{
                resultado3 == resultado4;
            }
        break;
        case 3:
            printf("\nPIB foi escolhido.\n");
            printf("\nO valor do PIB da carta 1 é: %f\n", pib1);
            printf("O valor do PIB da carta 2 é: %f\n", pib2);
            if (pib1 > pib2){
                resultado3 = pib1 > pib2 ? 1 : 0;
            }else if (pib2 > pib1){
                resultado4 = pib2 > pib1 ? 1 : 0;
            }else{
                resultado3 == resultado4;
            }
        break;
        case 4:
            printf("\nNumero de Pontos Turisticos foi Escolhido.\n");
            printf("\nA quantidade de Pontos Turisticos da carta 1 é: %d \n",npt1);
            printf("A quantidade de Pontos Turisticos da carta 2 é: %d \n",npt2);
            if (npt1 > npt2){
                resultado3 = npt1 > npt2 ? 1 : 0;
            }else if (npt2 > npt1){
                resultado4 = npt2 > npt1 ? 1 : 0;
            }else{
                resultado3 == resultado4;
            }
        break;   
        case 5:
            printf("\nDensidade Demográfica foi escolhido.\n");
            printf("\nA Densidade Demográfica da carta 1 é: %f\n", densidade1);
            printf("A Densidade Demográfica da carta 2 é: %f\n", densidade2);
            if (densidade1 < densidade2){
                resultado3 = densidade1 < densidade2 ? 1 : 0;
            }else if (densidade2 < densidade1){
                resultado4 = densidade2 < densidade1 ? 1 : 0;
            }else{
                resultado3 == resultado4;
            }
        break;
        default:
            printf("\nNumero invalido.\n");
        }
    }

    // Compara os resultados para decidir o vencedor
    if ((resultado1 + resultado3) > (resultado2 + resultado4))
    {
        printf("\nPrabéns Carta 1 venceu!!\n");
    }else if ((resultado1 + resultado3) < (resultado2 + resultado4))
    {
        printf("\nPrabéns Carta 2 venceu!!\n");
    }else 
    {
        printf("\nEmpate!\n");
    }

    return 0;
}