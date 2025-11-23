#include <stdio.h>

// -----------------------------
// Funções recursivas
// -----------------------------

// Torre para cima
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

// Torre para baixo
void moverTorreBaixo(int casas) {
    if (casas == 0) return;
    printf("Baixo\n");
    moverTorreBaixo(casas - 1);
}

// Bispo: recursivo e com loops aninhados
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return;
    // Loop interno para horizontal
    for (int h = 0; h < horizontal; h++) {
        printf("Direita\n");
    }
    printf("Cima\n");
    moverBispo(vertical - 1, horizontal);
}

// Rainha: combina Torre e Bispo recursivamente
void moverRainha(int cima, int direita) {
    if (cima > 0) {
        printf("Cima\n");
        moverRainha(cima - 1, direita);
    } else if (direita > 0) {
        printf("Direita\n");
        moverRainha(cima, direita - 1);
    }
}

// -----------------------------
// Cavalo com loops complexos
// -----------------------------
void moverCavalo() {
    printf("Movimento do Cavalo (nível mestre):\n");

    int casasCima = 2;
    int casasDireita = 1;

    int v = 0, h = 0;
    while (v < casasCima) {
        printf("Cima\n");
        v++;
        h = 0;
        while (h < casasDireita) {
            if (h > 0) break;
            printf("Direita\n");
            h++;
        }
    }

    printf("\n");
}

// -----------------------------
// Função principal
// -----------------------------
int main() {

    printf("\nDesafio: nível mestre -- Criando Movimentos Complexos\n\n");

    // Torre
    printf("Movimento da Torre:\n");
    moverTorreCima(3);
    moverTorreBaixo(2);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(2, 2); // sobe 2, direita 2
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(2, 3); // exemplo de movimento
    printf("\n");

    // Cavalo
    moverCavalo();

    return 0;
}
