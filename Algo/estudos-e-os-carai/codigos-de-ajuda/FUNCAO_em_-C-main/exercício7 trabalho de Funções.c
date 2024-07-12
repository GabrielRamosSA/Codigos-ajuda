#include <stdio.h>

float somaMaiorMenor(float a, float b, float c) {
    float maior, menor;

    if (a >= b && a >= c) {
        maior = a;
    } else if (b >= a && b >= c) {
        maior = b;
    } else {
        maior = c;
    }

    if (a <= b && a <= c) {
        menor = a;
    } else if (b <= a && b <= c) {
        menor = b;
    } else {
        menor = c;
    }

    return maior + menor;
}

int main() {
    float a, b, c;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    float resultado = somaMaiorMenor(a, b, c);
    printf("A soma do maior e do menor numero eh: %.2f\n", resultado);

    return 0;
}
