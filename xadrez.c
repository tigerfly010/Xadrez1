#include <stdio.h>

int main() {
    // === Movimento da Torre (FOR) ===
    int i;
    printf("Movimento da Torre (FOR):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // === Movimento do Bispo (WHILE) ===
    int j = 1;
    printf("\nMovimento do Bispo (WHILE):\n");
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // === Movimento da Rainha (DO-WHILE) ===
    int k = 1;
    printf("\nMovimento da Rainha (DO-WHILE):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // === Movimento do Cavalo (FOR + WHILE com loops aninhados) ===
    printf("\nMovimento do Cavalo (FOR + WHILE):\n");

    // O Cavalo fará 1 movimento em "L": 2 casas para baixo e 1 para a esquerda
    const int movimentos_verticais = 2;  // Baixo
    const int movimentos_horizontais = 1;  // Esquerda

    // Loop externo com FOR: simula os movimentos verticais (2x)
    for (int v = 1; v <= movimentos_verticais; v++) {
        printf("Baixo\n");

        // Loop interno com WHILE: simula o movimento horizontal após o segundo "Baixo"
        if (v == movimentos_verticais) {
            int h = 1;
            while (h <= movimentos_horizontais) {
                printf("Esquerda\n");
                h++;
            }
        }
    }

    return 0;
}