#include <stdio.h>

long long calcula_agua_necessaria(int *A, int n, int h) {
    long long agua_necessaria = 0;
    for (int i = 0; i < n; ++i) {
        if (h > A[i]) {
            agua_necessaria += (h - A[i]);
        }
    }
    return agua_necessaria;
}

int main() {
    int num_casos;
    scanf("%d", &num_casos);
    while (num_casos--) {
        int num_colunas;
        long long max_agua;
        scanf("%d %lld", &num_colunas, &max_agua);
        int alturas[num_colunas];
        int altura_maxima = 0;
        for (int i = 0; i < num_colunas; ++i) {
            scanf("%d", &alturas[i]);
            if (alturas[i] > altura_maxima) {
                altura_maxima = alturas[i];
            }
        }

        int menor_altura = 1, maior_altura = altura_maxima + max_agua, altura_media, melhor_h = 1;
        while (menor_altura <= maior_altura) {
            altura_media = menor_altura + (maior_altura - menor_altura) / 2;
            if (calcula_agua_necessaria(alturas, num_colunas, altura_media) <= max_agua) {
                melhor_h = altura_media;
                menor_altura = altura_media + 1;
            } else {
                maior_altura = altura_media - 1;
            }
        }

        printf("%d\n", melhor_h);
    }
    return 0;
}
