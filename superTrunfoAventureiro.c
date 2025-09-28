#include <stdio.h>

int main() {
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    int atributo;
    float valor1, valor2;

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

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos turisticos\n5 - Densidade\n");
    scanf("%d", &atributo);

    switch (atributo) {
        case 1: valor1 = populacao1; valor2 = populacao2; break;
        case 2: valor1 = area1; valor2 = area2; break;
        case 3: valor1 = pib1; valor2 = pib2; break;
        case 4: valor1 = pontos1; valor2 = pontos2; break;
        case 5: valor1 = densidade1; valor2 = densidade2; break;
        default: printf("Opcao invalida\n"); return 1;
    }

    printf("\n%s: %.2f\n", cidade1, valor1);
    printf("%s: %.2f\n", cidade2, valor2);

    if (atributo == 5) {
        if (valor1 < valor2)
            printf("Vencedor: %s\n", cidade1);
        else if (valor2 < valor1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate\n");
    } else {
        if (valor1 > valor2)
            printf("Vencedor: %s\n", cidade1);
        else if (valor2 > valor1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate\n");
    }

    return 0;
}



