#include <stdio.h>

int main() {
    int N;
    char continuar;
    
    do {
       
        printf("Digite um número entre 0 e 10: ");
        scanf("%d", &N);
        
        
        char left_hand[6];  
        char right_hand[6]; 
        
       
        if (N <= 4) {
           
            for (int i = 0; i < N; i++) {
                left_hand[i] = 'I';
            }
            left_hand[N] = '\0'; 
            
            right_hand[0] = '*'; 
            right_hand[1] = '\0'; 
        } else {
            
            for (int i = 0; i < 5; i++) {
                left_hand[i] = 'I';
            }
            left_hand[5] = '\0'; 
            
            int remaining = N - 5;
            for (int i = 0; i < remaining; i++) {
                right_hand[i] = 'I';
            }
            right_hand[remaining] = '\0'; 
        }
        
       
        printf("Mão Esquerda: %s\n", left_hand);
        printf("Mão Direita : %s\n", right_hand);
        
       
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);  
        
        
        while (getchar() != '\n'); 
        
    } while (continuar == 'S' || continuar == 's');
    
    printf("Programa encerrado.\n");
    
    return 0;
}
