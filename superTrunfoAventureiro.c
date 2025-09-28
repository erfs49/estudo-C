#include <stdio.h>
#include <string.h>

int main() {
    // Dados da primeira carta
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // Dados da segunda carta
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    int opcao;
    float valor1, valor2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar(); // Limpa buffer

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade demográfica
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Menu interativo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da Comparação ---\n");
    printf("Cidade 1: %s\n", nomeCidade1);
    printf("Cidade 2: %s\n\n", nomeCidade2);

    switch (opcao) {
        case 1:
            valor1 = populacao1;
            valor2 = populacao2;
            printf("População: %d x %d\n", populacao1, populacao2);
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            printf("Área: %.2f x %.2f\n", area1, area2);
            break;
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            break;
        case 4:
            valor1 = pontosTuristicos1;
            valor2 = pontosTuristicos2;
            printf("Pontos Turísticos: %d x %d\n", pontosTuristicos1, pontosTuristicos2);
            break;
        case 5:
            valor1 = densidade1;
            valor2 = densidade2;
            printf("Densidade Demográfica: %.2f x %.2f\n", densidade1, densidade2);
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Lógica de comparação com if-else aninhado
    if (opcao == 5) {
        if (valor1 < valor2) {
            printf("Vencedor: %s (menor densidade)\n", nomeCidade1);
        } else if (valor2 < valor1) {
            printf("Vencedor: %s (menor densidade)\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    } else {
        if (valor1 > valor2) {
            printf("Vencedor: %s\n", nomeCidade1);
        } else if (valor2 > valor1) {
            printf("Vencedor: %s\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    }

    return 0;
}
