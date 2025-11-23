#include <stdio.h>

///COM DEUS NA FRENTE VAMOS EM FRENTE!

// Funções recursivas


//Função para mover a Torre para cima
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

// Função para mover a  Torre para baixo
void moverTorreBaixo(int casas) {
    if (casas == 0) return;
    printf("Baixo\n");
    moverTorreBaixo(casas - 1);
}

// Função para mover o Bispo: recursivo e com loops aninhados
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return;
    // Loop interno para horizontal
    for (int h = 0; h < horizontal; h++) {
        printf("Direita\n");
    }
    printf("Cima\n");
    moverBispo(vertical - 1, horizontal);
}

// Função para mover a Rainha: combina Torre e Bispo recursivamente
void moverRainha(int cima, int direita) {
    if (cima > 0) {
        printf("Cima\n");
        moverRainha(cima - 1, direita);
    } else if (direita > 0) {
        printf("Direita\n");
        moverRainha(cima, direita - 1);
    }
}

//função para mover o cavalo...com loops complexos 
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

/// função principal "main" funciona como uma classe, em .js, react, angular, etc... vamor fazer acontecer dentro desta função.


int main() {
   ///título para estilizar "tentar deixar mais bonitinho o console".
    printf("\nDesafio: nível mestre - Criando Movimentos Complexos\n\n");

    // chamando o movimento da Torre
    printf("Movimento da Torre:\n"); //título
    moverTorreCima(3); //move 3 vezes a torre para cima
    moverTorreBaixo(2); //move 2 vezes a torre para baixo
    printf("\n"); //saltar linha para próxima função

    // chamando o movimento do Bispo
    printf("Movimento do Bispo:\n"); //título
    moverBispo(2, 2); // move dois para cima e dois para direita
    printf("\n"); //saltar linha para próxima função


    // chamando o movimento da Rainha
    printf("Movimento da Rainha:\n"); //título
    moverRainha(2, 3); // move dois para cima e 3 para direita
    printf("\n"); //saltar linha para próxima função

    // chamando o movimento do Cavalo
    moverCavalo();

    return 0;
}
