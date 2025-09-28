#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Entrada carta 1
    printf("Estado da carta 1: ");
    scanf(" %c", &estado1);
    printf("Código da carta 1: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade 1: ");
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
    printf("\nEstado da carta 2: ");
    scanf(" %c", &estado2);
    printf("Código da carta 2: ");
    scanf(" %s", codigo2);
    printf("Nome da cidade 2: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Comparação por população
    printf("\nComparação por População:\n");
    printf("%s: %d habitantes\n", cidade1, populacao1);
    printf("%s: %d habitantes\n", cidade2, populacao2);

    if (populacao1 > populacao2)
        printf("Resultado: %s venceu!\n", cidade1);
    else if (populacao2 > populacao1)
        printf("Resultado: %s venceu!\n", cidade2);
    else
        printf("Resultado: Empate!\n");

    return 0;
}

