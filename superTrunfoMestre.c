#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
typedef struct {
    char nomePais[30];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
} Carta;

// Função para calcular atributos derivados
void calcularAtributos(Carta *c) {
    c->densidade = c->populacao / c->area;
    c->pibPerCapita = (c->pib * 1000000000) / c->populacao;
}

// Função para exibir menu de atributos
void exibirMenu(int excluido) {
    printf("\nEscolha um atributo:\n");
    if (excluido != 1) printf("1 - População\n");
    if (excluido != 2) printf("2 - Área\n");
    if (excluido != 3) printf("3 - PIB\n");
    if (excluido != 4) printf("4 - Pontos Turísticos\n");
    if (excluido != 5) printf("5 - Densidade Demográfica\n");
    if (excluido != 6) printf("6 - PIB per Capita\n");
    printf("Opção: ");
}

// Função para obter valor de atributo
float obterValor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return (float)c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return (float)c.pontosTuristicos;
        case 5: return c.densidade;
        case 6: return c.pibPerCapita;
        default: return -1;
    }
}

// Função para comparar dois atributos
int compararAtributo(float v1, float v2, int atributo) {
    return (atributo == 5) ? (v1 < v2) : (v1 > v2); // Densidade: menor vence
}

int main() {
    Carta carta1, carta2;
    int atributo1, atributo2;

    // Cadastro das cartas
    printf("Cadastro da Carta 1:\n");
    printf("Nome do país: ");
    fgets(carta1.nomePais, sizeof(carta1.nomePais), stdin);
    carta1.nomePais[strcspn(carta1.nomePais, "\n")] = 0;
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    getchar(); // Limpa buffer

    printf("\nCadastro da Carta 2:\n");
    printf("Nome do país: ");
    fgets(carta2.nomePais, sizeof(carta2.nomePais), stdin);
    carta2.nomePais[strcspn(carta2.nomePais, "\n")] = 0;
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Calcula atributos derivados
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    // Escolha dos atributos
    do {
        exibirMenu(0);
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 6) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (atributo1 < 1 || atributo1 > 6);

    do {
        exibirMenu(atributo1);
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1);

    // Comparação dos atributos
    float valor1A = obterValor(carta1, atributo1);
    float valor2A = obterValor(carta2, atributo1);
    float valor1B = obterValor(carta1, atributo2);
    float valor2B = obterValor(carta2, atributo2);

    int v1A = compararAtributo(valor1A, valor2A, atributo1);
    int v1B = compararAtributo(valor1B, valor2B, atributo2);

    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    // Exibição dos resultados
    printf("\n--- Resultado da Rodada ---\n");
    printf("Carta 1: %s\n", carta1.nomePais);
    printf("Carta 2: %s\n\n", carta2.nomePais);

    printf("Atributo 1 (%d): %.2f x %.2f => %s venceu\n", atributo1, valor1A, valor2A,
           v1A ? carta1.nomePais : carta2.nomePais);
    printf("Atributo 2 (%d): %.2f x %.2f => %s venceu\n", atributo2, valor1B, valor2B,
           v1B ? carta1.nomePais : carta2.nomePais);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", carta1.nomePais, soma1);
    printf("%s: %.2f\n", carta2.nomePais, soma2);

    if (soma1 == soma2) {
        printf("\nResultado Final: Empate!\n");
    } else {
        printf("\nResultado Final: %s venceu a rodada!\n", (soma1 > soma2) ? carta1.nomePais : carta2.nomePais);
    }

    return 0;
}

