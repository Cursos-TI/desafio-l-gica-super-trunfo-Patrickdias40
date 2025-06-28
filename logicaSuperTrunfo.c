#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int PontoTur1, PontoTur2;
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2, PIB1, PIB2, PIBPerCapt1, PIBPerCapt2, DensiPop1, DensiPop2;
    char Estado1[30], Estado2[30];
    char CodCarta1[10], CodCarta2[10], Cidade1[30], Cidade2[30];

    // Cidade 1
    printf("\n-- Digite os valores para carta numero 1 --\n");

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &Cidade1);

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", &Estado1);

    printf("Digite o codigo da carta da cidade: ");
    scanf(" %[^\n]", &CodCarta1);

    printf("Digite a quantidade de populacao da cidade: ");
    scanf("%lu", &Populacao1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a area da cidade(Km²): ");
    scanf("%f", &Area1);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &PontoTur1);

    // Cidade 2
    printf("\n-- Digite os valores para carta numero 2 --\n");

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &Cidade2);

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", &Estado2);

    printf("Digite o codigo da carta da cidade: ");
    scanf(" %[^\n]", &CodCarta2);

    printf("Digite a quantidade de populacao da cidade: ");
    scanf("%lu", &Populacao2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a area da cidade(Km²): ");
    scanf("%f", &Area2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &PontoTur2);

    //execucao 
    //PIB per capita 
    PIBPerCapt1 = (float) PIB1 / Populacao1;
    PIBPerCapt2 = (float) PIB2 / Populacao2;
    //Densidade populacional
    DensiPop1 = (float) Populacao1 / Area1;
    DensiPop2 = (float) Populacao2 / Area2;

    //Retorna valores da carta 1
    printf("\n--Carta 1: \n");
    printf("Nome: %s \n", Cidade1);
    printf("Estado: %s\n", Estado1);
    printf("Código: %s \n", CodCarta1);
    printf("Populacao: %.3lu \n", Populacao1);
    printf("PIB: %.2f \n", PIB1);
    printf("Área: %.2f Km² \n", Area1);
    printf("Pontos turisticos: %d \n", PontoTur1);
    printf("PIB per capita: %.2f reias \n", PIBPerCapt1);
    printf("Desidade populacional %.2f hab/km² \n", DensiPop1);

    //Retorna valores da carta 2
    printf("\n-- Carta 2: \n");
    printf("Nome: %s \n", Cidade2);
    printf("Estado: %s\n", Estado2);
    printf("Código: %s \n", CodCarta2);
    printf("Populacao: %.3lu \n", Populacao2);
    printf("PIB: %.2f \n", PIB2);
    printf("Área: %.2f Km² \n", Area2);
    printf("Pontos turisticos: %d \n", PontoTur2);
    printf("PIB per capita: %.2f reias \n", PIBPerCapt2);
    printf("Densidade populacional %.2f hab/km² \n", DensiPop2);

    //Comparacao dos atributos das cartas
    printf("\n-- Comparacao das cartas: \n");

    //Comparacao da populacao
    if(Populacao1 == Populacao2){
        printf("A popolcao das cidades é igual (Empate).\n");
    } else if(Populacao1 > Populacao2){
        printf("A popolcao de %s é maior (Carta 1 Venceu).\n", Cidade1);
    } else{
        printf("A popolcao de %s é maior (Carta 2 Venceu).\n", Cidade2);
    }

    //Comparacao da pib
    if(PIB1 == PIB2){
        printf("O PIB das cidades é igual (Empate).\n");
    } else if(PIB1 > PIB2){
        printf("O PIB de %s é maior (Carta 1 Venceu).\n", Cidade1);
    } else{
        printf("O PIB de %s é maior (Carta 2 Venceu).\n", Cidade2);
    }

    //Comparacao da area
    if(Area1 == Area2){
        printf("A área das cidades é igual (Empate).\n");
    } else if(Area1 > Area2){
        printf("A área de %s é maior (Carta 1 Venceu).\n", Cidade1);
    } else{
        printf("A área de %s é maior (Carta 2 Venceu).\n", Cidade2);
    }

    //Comparacao da pontos turisticos
    if(PontoTur1 == PontoTur2){
        printf("A quantidade de pontos turisticos das cidades é igual (Empate).\n");
    } else if(PontoTur1 > PontoTur2){
        printf("%s possui mais pontos turisticos (Carta 1 Venceu).\n", Cidade1);
    } else{
        printf("%s possui mais pontos turisticos (Carta 2 Venceu).\n", Cidade2);
    }

    //Comparacao da pib per capita
    if(PIBPerCapt1 == PIBPerCapt2){
        printf("O PIB per capita das cidades é igual (Empate).\n");
    } else if(PIBPerCapt1 > PIBPerCapt2){
        printf("O PIB per capita de %s é maior (Carta 1 Venceu).\n", Cidade1);
    } else{
        printf("O PIB per capita de %s é maior (Carta 2 Venceu).\n", Cidade2);
    }

    //Comparacao da densidade populacional
    if(DensiPop1 == DensiPop2){
        printf("A densidade populacional das cidades é igual (Empate).\n");
    } else if(PIBPerCapt1 < PIBPerCapt2){
        printf("A densidade populacional de %s é menor (Carta 1 Venceu).\n", Cidade1);
    } else{
        printf("A densidade populacional de %s é menor (Carta 2 Venceu).\n", Cidade2);
    }

    return 0;
}
