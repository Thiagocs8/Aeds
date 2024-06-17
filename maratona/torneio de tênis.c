#include <stdio.h>

int main() {
    char resultados[6]; 
    int vitorias = 0;  

   
    printf("Digite os resultados dos 6 jogos (V para vitória, P para derrota):\n");
    for (int i = 0; i < 6; i++) {
        scanf(" %c", &resultados[i]);
        if (resultados[i] == 'V') {
            vitorias++; 
        }
    }

   
     if (vitorias >= 5) {
        printf("1\n"); 
    } else if (vitorias >= 3) {
        printf("2\n"); 
    } else if (vitorias >= 1) {
        printf("3\n"); 
    } else {
        printf("-1V\n"); 
    }

    return 0;
}
