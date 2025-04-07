 #include <stdio.h>
    int main () {
        char estado1[50], estado2[50];
        int populacao1, populacao2;
        int turistico1, turistico2;
        float area1, pib1, area2, pib2, denspop1, denspop2, percapita1, percapita2;
        char codcarta1 [5], nomecidade1 [10], codcarta2 [5], nomecidade2 [10];

        printf("Nome do Estado: "); // Declara o nome do estado da carta
        scanf("%s", estado1);

        printf("Codigo da Carta: "); // Declara o codigo da carta
        scanf("%s", codcarta1);

        printf("Nome da cidade: "); // Declara o nome da cidade da carta
        scanf("%s", nomecidade1);
 
        printf("Populacao: "); // Declara a populacao da cidade da carta
        scanf("%d", &populacao1);

        printf("Area em km²: "); // Declara a area da cidade da carta
        scanf("%f", &area1);

        printf("PIB: "); // Declara a area da cidade da carta
        scanf("%f", &pib1);

        printf("Numero de pontos turisticos: "); // Declara os pontos turisticos da cidade da carta
        scanf("%d", &turistico1);

        printf("\n"); // Quebra de linha

        // Calculo de densidade populacional e Pib per capita card 1

        denspop1 = (area1 / populacao1);

        percapita1 = (pib1 / populacao1);

        
        // Declara os dados completos da carta

        printf("Nome do Estado: %s \n", estado1);
        printf("Populacao: %d \n", populacao1);
        printf("Codigo da Carta: %s \n", codcarta1);
        printf("Area em Km²: %.0f \n", area1);
        printf("PIB: %.0f \n", pib1);
        printf("Nome da cidade: %s \n" , nomecidade1);
        printf("Codigo da carta: %s \n", codcarta1);
        printf("Numero de pontos turisticos: %d \n", turistico1);
        printf("Densidade Populacional: %.2f \n", denspop1);
        printf("PIB Per Capita: %.2f \n", percapita1);

        printf("\n"); // Quebra de linha




        // Inicio de informacoes Card 2    

        printf("Nome do Estado: "); // Declara o nome do estado da carta
        scanf("%s", estado2);

        printf("Codigo da Carta: "); // Declara o codigo da carta
        scanf("%s", codcarta2);

        printf("Nome da cidade: "); // Declara o nome da cidade da carta
        scanf("%s", nomecidade2);

        printf("Populacao: "); // Declara a populacao da cidade da carta
        scanf("%d", &populacao2);

        printf("Area em km²: "); // Declara a area da cidade da carta
        scanf("%f", &area2);

        printf("PIB: "); // Declara a area da cidade da carta
        scanf("%f", &pib2);

        printf("Numero de pontos turisticos: "); // Declara os pontos turisticos da cidade da carta
        scanf("%d", &turistico2);

        printf("\n"); // Quebra de linha

        // Calculo de densidade populacional e Pib per capita card 2

        denspop2 = (area2 / populacao2);

        percapita2 = (pib2 / populacao2);

        // Declara os dados completos da carta

        printf("Nome do Estado: %s \n", estado2);
        printf("Populacao: %d \n", populacao2);
        printf("Codigo da Carta: %s \n", codcarta2);
        printf("Area em Km²: %.0f \n", area2);
        printf("PIB: %.0f \n", pib2);
        printf("Nome da cidade: %s \n" , nomecidade2);
        printf("Codigo da carta: %s \n", codcarta2);
        printf("Numero de pontos turisticos: %d \n", turistico2);
        printf("Densidade Populacional: %.2f \n", denspop2);
        printf("PIB Per Capita: %.2f \n", percapita2);

      
        printf("\n"); // Quebra de linha
        
    return 0;

    }
