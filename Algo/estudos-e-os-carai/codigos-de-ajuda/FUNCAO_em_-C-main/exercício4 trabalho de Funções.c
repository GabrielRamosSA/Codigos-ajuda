#include <stdio.h>

int contarPares(int a, int b, int c) {
    int quantidadePares = 0;

    if (a % 2 == 0) {
        quantidadePares++;
    }
    if (b % 2 == 0) {
        quantidadePares++;
    }
    if (c % 2 == 0) {
        quantidadePares++;
    }

    return quantidadePares;
}

int main() {
    int a, b, c;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    int pares = contarPares(a, b, c);
    printf("A quantidade de numeros pares eh: %d\n", pares);

    return 0;
}
