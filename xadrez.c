#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Recursivos para torre, bispo e rainha.
void torre(int numero){
    if(numero > 0){
        printf("Torre andou 1 casa para direita\n");
        torre(numero - 1);
    }
}

void bispo (int numero){
    
    if(numero > 0){
        for(int bispo1 = 1; bispo1<= 5; bispo1++){
            printf("Bispo andou uma casa vertical\n");
                for(int bispo2 = 1; bispo2 <2; bispo2++){
                    printf("Bispo andou uma casa na horizontal\n");
                }
    }
}
}
void rainha(int numero){
    if(numero >0){
        printf("Rainha andou 1 casa para a esquerda\n");
        rainha(numero - 1);
    }
}
int main() {

// Chamando os recursivos da torre, bispo e rainha.   

    torre(5); // Torre - Andar cinco casas para direita. 
    printf("\n");

    bispo(5); // Bispo - Andar cinco casas na diagonal para cima e direita.
    printf("\n");

    rainha(5);// Rainha - Andar oito casas para a esquerda.
    printf("\n");

// Cavalo - Andar duas casas para cima e uma para direita usando loops aninhados com multiplas variaveis.
    for(int cavalo = 1; cavalo < 2; cavalo ++ ){
        for(int cavalo1 = 1; cavalo1 <= 2; cavalo1 ++){
            printf("Cavalo andou 1 casa para cima\n");
        }
        printf("Cavalo andou 1 casa para direita\n");
    }
    


    return 0;
}
