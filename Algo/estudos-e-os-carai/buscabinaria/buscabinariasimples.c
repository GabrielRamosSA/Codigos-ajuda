#include <stdio.h>

int main() {
    int tam, buscar, i;
    scanf("%d", &tam);
    int v[tam];

    for (i = 0; i < tam; i++) {
        scanf("%d", &v[i]);
    }


    scanf("%d", &buscar);
    int encontrado = 0;
    for (i = 0; i < tam; i++) {
        if (v[i] == buscar) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("Valor %d encontrado na posicao %d\n", buscar, i);
    } else {
        printf("Valor %d nao encontrado\n", buscar);
    }

    return 0;
}
