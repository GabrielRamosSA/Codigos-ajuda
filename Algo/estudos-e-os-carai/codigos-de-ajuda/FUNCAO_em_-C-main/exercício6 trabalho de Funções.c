#include <stdio.h>

int verificarQuadradoOuRetangulo(float b, float h) {
    if (b == h) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float b, h;
    printf("Digite a medida da base: ");
    scanf("%f", &b);
    printf("Digite a medida da altura: ");
    scanf("%f", &h);

    int resultado = verificarQuadradoOuRetangulo(b, h);

    if (resultado == 1) {
        printf("Eh um quadrado.\n");
    } else {
        printf("Eh um retangulo.\n");
    }

    return 0;
}
