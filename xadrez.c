#include <stdio.h>

int main(){
    int i = 1;

    //Movimento da Torre 5 casas para a direita.
    printf("Movimento da Torre\n");
    while (i <= 5){
        printf("Direita\n");
        i++;
    }
    printf("\n");
    
    //Movimento do bispo 5 casas para cima e à direita.
    printf("Movimento do Bispo\n");
    do {
        printf("Cima e à direita\n");
        i++;
    } while (i <= 10);
    printf("\n");

    //Movimento da Rainha 8 casas para a esquerda
    printf("Movimento da Rainha\n");
    for (int i = 1; i <= 8; i++){
        printf("Esquerda\n");
    }
    
    return 0;
}