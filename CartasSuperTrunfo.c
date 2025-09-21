#include <stdio.h>

int main(){
    
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[15], cidade2[15];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // nivel aventureiro - operadores matemáticos
    float dens1, dens2, pper1, pper2;

    // nivel mestre - super poder
    float superp1, superp2;

    printf("Vamos começar pela primeira carta.\n");
    
    printf("Qual é o estado? \n");
    scanf(" %c", &estado1);

    printf("Qual é o código da carta? \n");
    scanf("%s", &codigo1);
    
    printf("Qual é a Cidade? \n");
    scanf("%s", &cidade1);

    printf("Quantos Habitantes? \n");
    scanf("%d", &populacao1);

    printf("Qual é a Área? \n");
    scanf("%f", &area1);

    printf("Qual é o PIB? \n");
    scanf("%f", &pib1);

    printf("Qual é o Número de Pontos Turísticos? \n");
    scanf("%d", &pontos1);

    printf("Agora vamos à segunda carta. \n");
    
    printf("Qual é o estado? \n");
    scanf(" %c", &estado2);

    printf("Qual é o código da carta? \n");
    scanf("%s", &codigo2);
    
    printf("Qual é a Cidade? \n");
    scanf("%s", &cidade2);

    printf("Quantos Habitantes? \n");
    scanf("%d", &populacao2);

    printf("Qual é a Área? \n");
    scanf("%f", &area2);

    printf("Qual é o PIB? \n");
    scanf("%f", &pib2);

    printf("Qual é o Número de Pontos Turísticos? \n");
    scanf("%d", &pontos2);

    // nivel aventureiro - operadores matemáticos
    dens1 = populacao1 / area1;
    dens2 = populacao2 / area2;
    pper1 = pib1 / populacao1;
    pper2 = pib2 / populacao2;

    // nivel mestre - super poder
    superp1 = populacao1 + area1 + pib1 + pontos1 + pper1 + (1/dens1);
    superp2 = populacao2 + area2 + pib2 + pontos2 + pper2 + (1/dens2);


    printf("Hora de conferir as respostas.\n");

    printf("Carta 1: \n");

    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km². \n", area1);
    printf("PIB: %.2f bilhões de reais. \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos1);

    // nivel aventureiro - operadores matemáticos
    printf("Densidade populacional: %.2f hab/km². \n", dens1); //float
    printf("PIB per capita: %.2f reais. \n", pper1); //float

    // super poder - soma dos atributos numericos
    printf("Super Poder Carta 1 é: %f\n", superp1);


    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km². \n", area2);
    printf("PIB: %.2f bilhões de reais. \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);

    // nivel aventureiro - operadores matemáticos
    printf("Densidade populacional %.2f hab/km². \n", dens2); //float
    printf("PIB per capita %.2f reais.\n", pper2); //float

    // super poder - soma dos atributos numericos
    printf("Super Poder Carta 2 é: %f\n", superp2);

    // nivel mestre - comparaçoes entre população, area, pib, pontos turisticos, densidade p., pib per capita e super poder.
    
    printf("Comparação de Cartas.\n");
    
    printf("População:\n");

    printf("Carta 1 > Carta 2: %d\n", populacao1 > populacao2); 
    printf("Carta 1 < Carta 2: %d\n", populacao1 < populacao2); 
    
    printf("Área:\n");

    printf("Carta 1 > Carta 2: %d\n", area1 > area2); 
    printf("Carta 1 < Carta 2: %d\n", area1 < area2);
    
    printf("PIB:\n");

    printf("Carta 1 > Carta 2: %d\n", pib1 > pib2); 
    printf("Carta 1 < Carta 2: %d\n", pib1 < pib2);

    printf("Pontos Turisticos:\n");

    printf("Carta 1 > Carta 2: %d\n", pontos1 > pontos2); 
    printf("Carta 1 < Carta 2: %d\n", pontos1 < pontos2);

    printf("Densidade Populacional:\n");

    printf("Carta 1 < Carta 2: %d\n", dens1 < dens2);

    printf("PIB per Capta:\n");

    printf("Carta 1 > Carta 2: %d\n", pper1 > pper2); 
    printf("Carta 1 < Carta 2: %d\n", pper1 < pper2);

    printf("Super Poder:\n");

    printf("Carta 1 > Carta 2: %d\n", superp1 > superp2); 
    printf("Carta 1 < Carta 2: %d\n", superp1 < superp2);        

  
    return 0;
}