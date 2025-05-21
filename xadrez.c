#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Torre
    printf("Torre \n");
    for (int t = 0; t < 5; t++)
    {
        printf("Direita \n");
    }
    
    // Bispo
    printf("Bispo \n");
    int b = 0;
    while(b < 5) {
        printf("Cima, Direita \n");
        b++;
    }

    // Rainha
    printf("Rainha \n");
    int r = 0;
    do {
        printf("Esquerda \n");
        r++;
    }
    while (r < 8);
    

    return 0;
}
