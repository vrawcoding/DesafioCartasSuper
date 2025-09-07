#include <stdio.h>

int main(){
    // declaraçao de variaveis da primeira carta
    char estado1[20], codcarta1[10], cidade1[20];
    int populacao1, pontosT1;
    float area1, pib1;

    // declaraçao de variaveis da segunda carta
    char estado2[20], codcarta2[10], cidade2[20];
    int populacao2, pontosT2;
    float area2, pib2;

    printf ("\n======= CARTA 1 =======\n");

    // area de cadastramento da primeira carta
    printf("Digite O Estado: ");
    scanf("%s", estado1);

    printf("Digite O Código Da Cidade (ex: B02): ");
    scanf("%s", codcarta1);

    printf("Digite O Nome Da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite A Populaçao Da Cidade: ");
    scanf("%f", &populacao1);

    printf("Digite A Àrea (km²): ");
    scanf("%f", &area1);

    printf("Qual o PIB?: ");
    scanf("%f", &pib1);

    printf("Quantos Pontos Turísticos Possui?: ");
    scanf("%f", &pontosT1);

    printf ("\n======= CARTA 2 =======\n");

    // area de cadastramento da segunda carta
    printf("Digite O Estado: ");
    scanf("%s", estado2);

    printf("Digite O Código Da Cidade (ex: B02): ");
    scanf("%s", codcarta2);

    printf("Digite O Nome Da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite A Populaçao Da Cidade: ");
    scanf("%f", &populacao2);

    printf("Digite A Àrea (km²): ");
    scanf("%f", &area2);

    printf("Qual o PIB?: ");
    scanf("%f", &pib2);

    printf("Quantos Pontos Turísticos Possui?: ");
    scanf("%f", &pontosT2);


    printf("\n        Carta 1         \n");

    //area de exibiçao da primeira carta
    printf("Estado: %s\n", estado1);
    printf("Código Da Carta: %s\n", codcarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populaçao: %d\n", populacao1);
    printf("Àrea: %.2f\n Km²", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosT1);

    printf("\n         Carta 2      \n");

    //area de exibiçao da segunda carta
    printf("Estado: %s\n", estado2);
    printf("Código Da Carta: %s\n", codcarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populaçao: %d\n", populacao2);
    printf("Àrea: %.2f\n Km²", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosT2);


    return 0;
 }