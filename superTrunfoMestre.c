#include <stdio.h>
#include <string.h>

int main() {
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    int atributo1, atributo2;

    // Entrada carta 1
    printf("Cidade 1: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada carta 2
    printf("\nCidade 2: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Menu atributo 1
    printf("\nEscolha o primeiro atributo:\n1 - População\n2 - Área\n3 - PIB\n4 - Pontos\n5 - Densidade\n");
    scanf("%d", &atributo1);

    // Menu atributo 2
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    scanf("%d", &atributo2);

    float v1a, v2a, v1b, v2b;

    // Atributo 1
    v1a = (atributo1 == 1) ? populacao1 :
          (atributo1 == 2) ? area1 :
          (atributo1 == 3) ? pib1 :
          (atributo1 == 4) ? pontos1 : densidade1;

    v2a = (atributo1 == 1) ? populacao2 :
          (atributo1 == 2) ? area2 :
          (atributo1 == 3) ? pib2 :
          (atributo1 == 4) ? pontos2 : densidade2;

    // Atributo 2
    v1b = (atributo2 == 1) ? populacao1 :
          (atributo2 == 2) ? area1 :
          (atributo2 == 3) ? pib1 :
          (atributo2 == 4) ? pontos1 : densidade1;

    v2b = (atributo2 == 1) ? populacao2 :
          (atributo2 == 2) ? area2 :
          (atributo2
