#include <stdio.h>

int somaPares(int a, int b) {
    int soma = 0;

    if (a % 2 != 0) {
        a++;
    }

    for (int i = a; i <= b; i += 2) {
        soma += i;
    }

    return soma;
}

int main() {
    int a, b;
    printf("Digite o primeiro numero (a): ");
    scanf("%d", &a);
    printf("Digite o segundo numero (b): ");
    scanf("%d", &b);

    int resultado = somaPares(a, b);
    printf("A soma dos numeros pares compreendidos entre %d e %d eh: %d\n", a, b, resultado);

    return 0;
}
