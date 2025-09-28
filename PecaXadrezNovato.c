#include <stdio.h>

int main() {
    int movimentoTorre = 5, 
        movimentoBispo = 5,
        movimentoRainha = 8;

    // Movimento da Torre
    printf("movimento torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("%d- direita\n", i);
    }

    // Movimento do Bispo
    printf("\nmovimento bispo:\n");
    for (int i = 1; i <= movimentoBispo; i++) {
        printf("%d- cima\n", i);
        printf("%d- direita\n", i);
    }

    // Movimento da Rainha
    printf("\nmovimento rainha:\n");
    for (int i = 1; i <= movimentoRainha; i++) {
        printf("%d- esquerda\n", i);
    }

    return 0;
}

