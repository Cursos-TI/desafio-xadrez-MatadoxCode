#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre = 1, bispo = 1, rainha = 1;

// Torre - Andar cinco casas para direita While.
    while (torre<= 5)
    {
        printf("Torre andou %d casa para direita\n", torre);
        torre++;
    }

printf("\n");
// Bispo - Andar cinco casas na diagonal para cima e direita usando do While
    do
    {
        printf("Bispo andou %d diagonalmente para cima direita\n", bispo);
        bispo++;
    } while (bispo <= 5);
printf("\n");
// Rainha - Andar oito casas para a esquerda usando For.

    for(rainha ; rainha <= 8; rainha++){
        printf("Rainha andou %d casa para a esquerda\n", rainha);
    }




    return 0;
}
