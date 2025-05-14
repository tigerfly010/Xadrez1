#include <stdio.h>

// ==========================
// Funções Recursivas
// ==========================

// TORRE: Move-se 5 casas para a direita (recursão simples)
void moverTorre(int passosRestantes) {
    if (passosRestantes == 0) return;
    printf("Direita\n");
    moverTorre(passosRestantes - 1);
}

// BISPO: Move-se 5 casas na diagonal superior direita (recursão + loops aninhados)
void moverBispo(int passosVerticais, int passosHorizontais) {
    if (passosVerticais == 0 || passosHorizontais == 0) return;

    for (int v = 0; v < passosVerticais; v++) {
        for (int h = 0; h < passosHorizontais; h++) {
            printf("Cima Direita\n");
            // A chamada recursiva é feita apenas uma vez por "movimento combinado"
            moverBispo(passosVerticais - 1, passosHorizontais - 1);
            return;
        }
    }
}

// RAINHA: Move-se 8 casas para a esquerda (recursão simples)
void moverRainha(int passosRestantes) {
    if (passosRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(passosRestantes - 1);
}

// ==========================
// Cavalo com Loops Complexos
// ==========================
void moverCavalo() {
    // Duas casas para cima (vertical) e uma para a direita (horizontal)
    const int movVertical = 2;
    const int movHorizontal = 1;

    printf("\nMovimento do Cavalo (Loops complexos):\n");

    for (int v = 1; v <= movVertical; v++) {
        if (v == 2) {
            int h = 1;
            while (h <= movHorizontal) {
                if (h == 1) {
                    printf("Direita\n");
                } else {
                    // segurança, nunca vai cair aqui, mas demonstra controle de fluxo
                    continue;
                }
                h++;
            }
        }
        printf("Cima\n");

        // Controle opcional de fluxo
        if (v == 3) {
            break; // segurança extra, nunca será atingido com movVertical = 2
        }
    }
}

// ==========================
// Função principal
// ==========================
int main() {
    // === TORRE ===
    printf("Movimento da Torre (Recursividade):\n");
    moverTorre(5);

    // === BISPO ===
    printf("\nMovimento do Bispo (Recursividade + Loops Aninhados):\n");
    moverBispo(5, 5);  // 5 casas diagonais (cima + direita)

    // === RAINHA ===
    printf("\nMovimento da Rainha (Recursividade):\n");
    moverRainha(8);

    // === CAVALO ===
    moverCavalo();

    return 0;
}
