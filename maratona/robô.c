#include <stdio.h>

int main() {
    int L, C;
    int A, B; 
    int mapa[1000][1000]; 

   
    printf("Digite as dimensões do salão (L e C): ");
    scanf("%d %d", &L, &C);
    
    
    printf("Digite a posição inicial do robô (A e B): ");
    scanf("%d %d", &A, &B);
    
    
    printf("Digite a matriz representando os ladrilhos (1 para preto, 0 para branco):\n");
    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }
    
    
    int linha_atual = A - 1; 
    int coluna_atual = B - 1; 
    
    while (coluna_atual < C && mapa[linha_atual][coluna_atual] == 1) {
        coluna_atual++;
    }
    
    
    printf("Posição final do robô: %d %d\n", A, coluna_atual + 1); 
    
    return 0;
}
