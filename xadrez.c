#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   
    // Variáveis para o controle do número de movimentos
    int torre = 5; // Torre move 5 casas para a direita
    int bispo = 5; // Bispo move 5 casas para a diagonal superior direita
    int rainha = 8; // Rainha move 8 casas para a esquerda
    int cavalo_baixo = 2; // Cavalo move 2 casas para baixo
    int cavalo_esquerda = 1; // Cavalo move 1 casa para a esquerda

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

    // Movimento do Cavalo (loops aninhados)
    printf("\n 4. Movimento do Cavalo\n");
    printf("Direção: 2 casas para baixo e 1 casa para a esquerda\n");
    printf("Trajetória:\n");

    // Primeira parte do movimento L: 2 casas para baixo
    // Loop FOR externo
    for (contador = 1; contador <= cavalo_baixo; contador++){
        printf("Passo %d: Baixo\n", contador);
    }
    
    // Segunda parte do movimento L: 1 casa para a esquerda
    // Loop WHILE interno
    int contador_interno = 1; // Contador específico para o loop interno
    while (contador_interno <= cavalo_esquerda){
        printf("Passo %d: Esquerda\n", contador_interno);
        contador_interno++; // Incrementa o contador interno
    }
    
  

    printf("\n Fim da simulação.\n");
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
