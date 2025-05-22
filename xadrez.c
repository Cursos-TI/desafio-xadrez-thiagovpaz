#include <stdio.h>

// Desafio de Xadrez - MateCheck

void moverTorre(int casas) {
    if(casas > 0) {
        printf("Direita \n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int linha, int coluna, int maxCasas) {
    if (linha >= maxCasas || coluna >= maxCasas) {
        return;
    }

    for (int i = linha; i < maxCasas; i++) {
        for (int j = coluna; j < maxCasas; j++) {
            if (i == j) {
                printf("Cima, Direita \n");
                break;
            }
        }
        moverBispo(i + 1, coluna + 1, maxCasas); 
        break;
    }
}

void moverRainha(int casas) {
    if(casas > 0) {
        printf("Esquerda \n");
        moverRainha(casas - 1);
    }
}

void moverCavalo() {
    int movimentos = 0;

    for (int i = 0; i < 8; i++) {   
        for (int j = 0; j < 8; j++) {  
            if ((i + 2 < 8) && (j + 1 < 8)) {
                if (movimentos >= 2) break; 
                printf("Cima \n");   
                movimentos++;
                continue;
            }
        }
        printf("Direita \n");   
        if (movimentos >= 2) break;
    }
}

int main() {
    // Torre
    printf("Torre \n");
    moverTorre(5);
 
    // Bispo
    printf("Bispo \n");
    moverBispo(0, 0, 5);
   

    // Rainha
    printf("Rainha \n");
    moverRainha(8);

    // Cavalo
    printf("Cavalo \n");
    moverCavalo();
    
    

    return 0;
}
