#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int total_tempo = 240;
    int tempo_da_festa = k;
    int tempo_da_prova = total_tempo - tempo_da_festa;

    int questoes_resolvidas = 0;
    int tempo_gasto = 0;

    for (int i = 1; i <= n; i++) {
        int tempo_por_problema = 5 * i;
        if (tempo_gasto + tempo_por_problema > tempo_da_prova) {
            break;
        }
        tempo_gasto += tempo_por_problema;
        questoes_resolvidas++;
    }

    printf("%d\n", questoes_resolvidas);

    return 0;
}
