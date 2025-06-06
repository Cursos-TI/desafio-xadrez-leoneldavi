#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // diagonal: 0  1
    //
    //           3  2
    // direcao: 0
    //        2   1
    //          3
    // dama:  7 0 1
    //        6   2
    //        5 4 3
    // cavalo: 7   0
    //       6       1
    //           x
    //       5       2
    //         4   3
    void bispo(int diagonal, int casas) {
        switch (diagonal)
        {
        case 0:
            for (; casas > 0; casas--){
                printf("Cima, Esquerda\n");
            }
            break;
        case 1:
            for (; casas > 0; casas--){
                printf("Cima, Direita\n");
            }
            break;
        case 2:
            for (; casas > 0; casas--){
                printf("Baixo, Direita\n");
            }
            break;
        case 3:
            for (; casas > 0; casas--){
                printf("Baixo, Esquerda\n");
            }
            break;
        default:
            printf("Erro");
            break;
        }
        return;
    }
    void torre(int direcao, int casas) {
        switch (direcao)
        {
        case 0:
            for (; casas > 0; casas--){
                printf("Cima\n");
            }
            break;
        case 1:
            for (; casas > 0; casas--){
                printf("Direita\n");
            }
            break;
        case 2:
            for (; casas > 0; casas--){
                printf("Baixo\n");
            }
            break;
        case 3:
            for (; casas > 0; casas--){
                printf("Esquerda\n");
            }
            break;
        default:
            printf("Erro");
            break;
        }
        return;
    }
    void dama(int dama, int casas) {
        switch (dama)
        {
        case 0:
            for (; casas > 0; casas--){
                printf("Cima\n");
            }
            break;
        case 1:
            for (; casas > 0; casas--){
                printf("Cima, Direita\n");
            }
            break;
        case 2:
            for (; casas > 0; casas--){
                printf("Direita\n");
            }
            break;
        case 3:
            for (; casas > 0; casas--){
                printf("Baixo, Direita\n");
            }
            break;
        case 4:
            for (; casas > 0; casas--){
                printf("Baixo\n");
            }
            break;
        case 5:
            for (; casas > 0; casas--){
                printf("Baixo, Esquerda\n");
            }
            break;
        case 6:
            for (; casas > 0; casas--){
                printf("Esquerda\n");
            }
            break;
        case 7:
            for (; casas > 0; casas--){
                printf("Cima, Esquerda\n");
            }
            break;
        default:
            printf("Erro");
            break;
        }
        return;
    }
    void cavalo(int cavalo) {
        switch (cavalo)
        {
        case 0:
            for (int i = 2; i > 0; i--){
                printf("Cima\n");
            }
            printf("Direita\n");
            break;
        case 1:
            for (int i = 2; i > 0; i--){
                printf("Direita\n");
            }
            printf("Cima\n");
            break;
        case 2:
            for (int i = 2; i > 0; i--){
                printf("Direita\n");
            }
            printf("Baixo\n");
            break;
        case 3:
            for (int i = 2; i > 0; i--){
                printf("Baixo\n");
            }
            printf("Direita\n");
            break;
        case 4:
            for (int i = 2; i > 0; i--){
                printf("Baixo\n");
            }
            printf("Esquerda\n");
            break;
        case 5:
            for (int i = 2; i > 0; i--){
                printf("Esquerda\n");
            }
            printf("Baixo\n");
            break;
        case 6:
            for (int i = 2; i > 0; i--){
                printf("Esquerda\n");
            }
            printf("Cima\n");
            break;
        case 7:
            for (int i = 2; i > 0; i--){
                printf("Cima\n");
            }
            printf("Esquerda\n");
        default:
            printf("Erro");
            break;
        }
        return;
    }
    void bisporecursiva(int diagonal, int casas) {
        if(casas <= 0 ) return;
        switch (diagonal)
        {
        case 0:
            bisporecursiva(0, --casas);
            printf("Cima, Esquerda\n");
            break;
        case 1:
            bisporecursiva(1, --casas);
            printf("Cima, Direita\n");
            break;
        case 2:
            bisporecursiva(2, --casas);
            printf("Baixo, Direita\n");
            break;
        case 3:
            bisporecursiva(3, --casas);
            printf("Baixo, Esquerda\n");
            break;
        default:
            printf("Erro");
            break;
        }
        return;
    }
    
    bispo(1, 5);
    torre(1, 5);
    dama(6, 8);
    cavalo(0);
    bisporecursiva(1,5);
    return 0;
}
