#include <stdio.h>

#define tamanho 10

int main() {
    int numeros[101] = {0};
    int numero;
    
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &numero);
        numeros[numero]++; 
    }
    
    printf("Numeros unicos:\n");
    for (int i = 10; i <= 100; i++) {
        if (numeros[i] == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
