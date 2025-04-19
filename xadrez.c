
#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Procedimento de mover a rainha
void moverRainha(int rainha) {
    if (rainha > 0) {
        printf("Esquerda\n");
        moverRainha(rainha-1);
    }
}

// Procedimento de mover a torre
void moverTorre(int torre) {
    if (torre > 0) {
        printf("Direita\n");
        moverTorre(torre-1);
    }
}

// Procedimento com loops aninhados para mover o bispo
void moverBispo(int passos) {
    if (passos <= 0) {
        return;
    }

    printf("Cima\n"); 
    for(int i = 1; i <= 1; i++) {
        printf("Direita\n");
    }
    moverBispo(passos - 1);
}

int main() {
    //Declaraçao de variáveis
    int opcao;
    int bispo = 1, rainha = 1, torre = 1;

    //Menu interativo para o usuário 
    printf("Bem vindo ao xadrez\n");
    printf("1: Bispo\n");
    printf("2: Torre\n");
    printf("3: Rainha\n");
    printf("4: Cavalo\n");
    printf("5: Sair do programa\n");
    printf("Escolha a peça que você deseja movimentar ou sair do programa:\n");
    scanf("%d", &opcao);

    //Switch para organizar a escolha feita pelo usuário
    switch (opcao){
        case 1: // Movimenta o bispo (5 vezes para cima e para direita usando loops aninhados)
            moverBispo(5);
            break;
        case 2: // Movimenta a torre (5 vezes  direita usando recursão)
            moverTorre(5);
            break;
        case 3: // Movimenta a rainha (8 vezes para esquerda usando recursão)
            moverRainha(8);
            break;
        case 4: // Movimenta o cavalo (2 vezes para cima e 1 para direita usando loop complexo)
            for(int cima = 2, direita = 1; cima >= 0 && direita >= 0; cima--, direita--) {
                if (cima > 0) {
                    printf("Cima\n");
                }
                if (direita == 0) {
                    printf("Direita\n");
                    break;
                }
            }
            break;
        case 5: // Fim da execução do programa
            printf("Saindo do programa..\n");
            break;
        default:
            printf("Opção Invalida");
            break;
    }

    return 0;
}
