#include <stdio.h>

void imprimirNumerosAteN(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    imprimirNumerosAteN(n);

    return 0;
}
