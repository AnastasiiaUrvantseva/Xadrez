#include <stdio.h>

int main() {

    int i;

    //Mover a torre 5 casas para a direita
    for ( i = 0; i < 5; i++)
    {
        printf("Direita\n"); //imprimindo direção do movimento
    }

    //Mover a rainha 8 casas para a esquerda
    for ( i = 0; i < 8; i++)
    {
        printf("Esquerda\n"); //imprimindo direção do movimento
    }

    //Mover a bispo 5 casas na diagonal para a direita
    for ( i = 0; i < 5; i++)
    {
        printf("Cima Direita\n"); //imprimindo direção do movimento
    }
    
    return 0;
}
