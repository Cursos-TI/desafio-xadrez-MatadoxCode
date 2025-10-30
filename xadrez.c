#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre = 1, bispo = 1, rainha = 1;

// Torre - Andar cinco casas para direita While.
    while (torre<= 5)
    {
        printf("Torre andou 1 casa para direita\n");
        torre++;
    }

printf("\n");

// Bispo - Andar cinco casas na diagonal para cima e direita usando do While
    do
    {
        printf("Bispo andou 1 diagonalmente para cima direita\n");
        bispo++;
    } while (bispo <= 5);
printf("\n");

// Rainha - Andar oito casas para a esquerda usando For.

    for(rainha ; rainha <= 8; rainha++){
        printf("Rainha andou 1 casa para a esquerda\n");
    }
printf("\n");

// Cavalo - Andar duas casas para cima e uma direita usando Loop aninhados.
    int cavalo = 1;

    while (cavalo < 2)
    {
        for(cavalo; cavalo <= 2; cavalo++){
            printf("Cavalo andou %d casa para cima\n", cavalo);
        }
        printf("Cavalo andou 1 casa para direita\n");
    }
    


    return 0;
}
