#include <stdio.h>

int main() {
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    int atributo;
    float valor1, valor2;

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

    // Menu de escolha
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade\n");
    scanf("%d", &atributo);

    switch (atributo) {
        case 1: valor1 = populacao1; valor2 = populacao2; break;
        case 2: valor1 = area1; valor2 = area2; break;
        case 3: valor1 = pib1; valor2 = pib2; break;
        case 4: valor1 = pontos1; valor2 = pontos2; break;
        case 5: valor1 = densidade1; valor2 = densidade2; break;
        default: printf("Opção inválida.\n"); return 1;
    }

    // Comparação
    printf("\n%s: %.2f\n", cidade1, valor1);
    printf("%s: %.2f\n", cidade2, valor2);

    if (atributo == 5) {
        if (valor1 < valor2)
            printf("Vencedor: %s\n", cidade1);
        else if (valor2 < valor1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
    } else {
        if (valor1 > valor2)
            printf("Vencedor: %s\n", cidade1);
        else if (valor2 > valor1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
    }

    return 0;
}


