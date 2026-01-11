#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   
    // Variáveis para o controle do número de movimentos
    int torre = 5; // Torre move 5 casas para a direita
    int bispo = 5; // Bispo move 5 casas para a diagonal superior direita
    int rainha = 8; // Rainha move 8 casas para a esquerda

    int contador; // Variável auxiliar para os loops

    printf("\n === Simulação de movimentos de xadrez ===\n");

    // Movimento da Torre (estrutura FOR)
    printf("\n 1. Movimento da Torre\n");
    printf("Direção: Direita\n");
    printf("Casas a percorrer: %d\n", torre);
    printf("Trajetória:\n");

    for (contador = 1; contador <= torre; contador++)
    {
        printf("Casa %d: Direita\n", contador);
    }
    
    // Movimento do Bispo (estrutura WHILE)
    printf("\n 2. Movimento do Bispo\n");
    printf("Direção: Diagonal superior direita\n");
    printf("Casas a percorrer: %d\n", bispo);
    printf("Trajetória:\n");

    contador = 1; // Reinicia o contador
    while (contador <= bispo)
    {
        printf("Casa %d: Cima, Direita\n", contador);
       
        contador++; // Incrementa o contador
    }

    // Movimento da Rainha (estrutura DO-WHILE)
    printf("\n 3. Movimento da Rainha\n");
    printf("Direção: Esquerda\n");
    printf("Casas a percorrer: %d\n", rainha);
    printf("Trajetória:\n");
    
    contador = 1; // Reinicia o contador novamente
    do
    {
        printf("Casa %d: Esquerda\n", contador);
        contador++; // Incrementa o contador
    } while (contador <= rainha);

    printf("\n Fim da simulação.\n");
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
