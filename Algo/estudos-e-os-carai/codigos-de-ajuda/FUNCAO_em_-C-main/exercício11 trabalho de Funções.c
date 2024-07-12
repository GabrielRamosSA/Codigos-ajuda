#include <stdio.h>

void imprimirDivisores(int numero) {
    printf("Divisores de %d: ", numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int numero;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O numero digitado não eh positivo.\n");
        return 0;
    }

    imprimirDivisores(numero);

    return 0;
}
