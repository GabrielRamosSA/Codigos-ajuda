#include <stdio.h>

int buscaSequencial(int arr[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == valor) {
            return i; // Retorna o índice onde o valor foi encontrado
        }
    }
    return -1; // Retorna -1 se o valor não foi encontrado
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int valor = 7;

    int resultado = buscaSequencial(arr, tamanho, valor);
    if (resultado != -1) {
        printf("Valor encontrado no índice %d\n", resultado);
    } else {
        printf("Valor não encontrado\n");
    }

    return 0;
}
