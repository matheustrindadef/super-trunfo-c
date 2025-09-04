#include <stdio.h>

// Declarando variaveis
int main() {

    char estado[1];
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

//variaveis da segunda carta
    char estado2[1];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Digite uma letra para representar o estado: ");
    scanf("%s", estado);

    printf("Digite o código da carta por exemplo A01: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o produto interno da cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%d", &pontos_turisticos);
    
    printf("\n");

    printf("Digite uma letra para representar o estado 2: ");
    scanf("%s", estado2);

    printf("Digite o código da carta por exemplo A01: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o produto interno da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");
    
    //Primeira carta as saidas
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos túristicos: %d\n", pontos_turisticos);
    
    printf("\n");
    // Segunda carta as saidas
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos túristicos: %d\n", pontos_turisticos2);



}