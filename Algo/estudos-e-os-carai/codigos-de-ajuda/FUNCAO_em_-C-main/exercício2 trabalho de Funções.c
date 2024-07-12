#include <stdio.h>

int encontrarMaior(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    int maior = encontrarMaior(x, y);
    printf("O maior valor entre x e y eh: %d\n", maior);

    return 0;
}
