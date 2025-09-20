#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[15], cidade2[15];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

  // Área para entrada de dados
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

    printf("Qual é o Número de Pontos Turísticos: \n");
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

    printf("Qual é o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
    printf("Hora de conferir as respostas.\n");

    printf("Carta 1 \n");

    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos %d \n", pontos1);
    
    printf("Carta 2 \n");

    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos %d \n", pontos2);

return 0;
} 
