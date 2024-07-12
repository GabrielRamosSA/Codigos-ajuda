#include <stdio.h>

int buscaBinaria(int arr[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        // Verifica se o valor está no meio
        if (arr[meio] == valor) {
            return meio;
        }

        // Se o valor é maior, ignore a metade esquerda
        if (arr[meio] < valor) {
            inicio = meio + 1;
        } else {
            // Se o valor é menor, ignore a metade direita
            fim = meio - 1;
        }
    }

    return -1; // Retorna -1 se o valor não foi encontrado
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int valor = 7;

    int resultado = buscaBinaria(arr, tamanho, valor);
    if (resultado != -1) {
        printf("Valor encontrado no índice %d\n", resultado);
    } else {
        printf("Valor não encontrado\n");
    }

    return 0;
}
