#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    printf("Estado da carta 1: ");
    scanf(" %c", &estado1);
    printf("Codigo da carta 1: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\nEstado da carta 2: ");
    scanf(" %c", &estado2);
    printf("Codigo da carta 2: ");
    scanf(" %s", codigo2);
    printf("Nome da cidade 2: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\nComparacao por Populacao:\n");
    printf("Carta 1 - %s: %d habitantes\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", cidade2, populacao2);

    if (populacao1 > populacao2)
        printf("Resultado: Carta 1 venceu\n");
    else if (populacao2 > populacao1)
        printf("Resultado: Carta 2 venceu\n");
    else
        printf("Resultado: Empate\n");

    return 0;
}





