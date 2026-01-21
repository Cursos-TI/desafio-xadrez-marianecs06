#include <stdio.h>

// Funções recursivas

// Torre
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva
}

// Rainha
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamada recursiva
}

// Bispo - recursivo + loops aninhados
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    // Loop externo: movimento vertical
    for (int vertical = 1; vertical <= 1; vertical++) {

        // Loop interno: movimento horizontal
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

int main() {

    // Variáveis para o controle do número de movimentos
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo_cima = 2;
    int cavalo_direita = 1;

    printf("\n=== Simulação de movimentos de xadrez ===\n");

    // Torre
    printf("\nMovimento da Torre:\n");
    moverTorre(torre);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(bispo);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(rainha);

    // Cavalo (loops complexos)
    printf("\nMovimento do Cavalo:\n");

    for (int i = 1; i <= cavalo_cima; i++) {
        if (i > 2) {
            break; 
        }
        printf("Cima\n");
    }

    int j = 1;
    while (j <= cavalo_direita) {
        if (j == 0) {
            continue;
        }
        printf("Direita\n");
        j++;
    }

    printf("\nFim da simulação.\n");

    return 0;
}