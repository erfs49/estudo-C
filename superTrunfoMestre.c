#include <stdio.h>

int main() {
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    int atributo1, atributo2;
    float valor1a, valor2a, valor1b, valor2b;

    printf("Cidade 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCidade 2: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos turisticos\n5 - Densidade\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Os atributos devem ser diferentes\n");
        return 1;
    }

    switch (atributo1) {
        case 1: valor1a = populacao1; valor2a = populacao2; break;
        case 2: valor1a = area1; valor2a = area2; break;
        case 3: valor1a = pib1; valor2a = pib2; break;
        case 4: valor1a = pontos1; valor2a = pontos2; break;
        case 5: valor1a = densidade1; valor2a = densidade2; break;
        default: printf("Atributo 1 invalido\n"); return 1;
    }

    switch (atributo2) {
        case 1: valor1b = populacao1; valor2b = populacao2; break;
        case 2: valor1b = area1; valor2b = area2; break;
        case 3: valor1b = pib1; valor2b = pib2; break;
        case 4: valor1b = pontos1; valor2b = pontos2; break;
        case 5: valor1b = densidade1; valor2b = densidade2; break;
        default: printf("Atributo 2 invalido\n"); return 1;
    }

    float soma1 = valor1a + valor1b;
    float soma2 = valor2a + valor2b;

    printf("\n%s: %.2f + %.2f = %.2f\n", cidade1, valor1a, valor1b, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", cidade2, valor2a, valor2b, soma2);

    printf("Resultado: %s\n", 
        (soma1 > soma2) ? cidade1 : 
        (soma2 > soma1) ? cidade2 : "Empate");

    return 0;
}

