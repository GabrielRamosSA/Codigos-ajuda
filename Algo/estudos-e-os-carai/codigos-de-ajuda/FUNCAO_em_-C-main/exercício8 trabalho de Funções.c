#include <stdio.h>

float calcularJuros(float c, int m, float t) {
    float j = c * m * (t/100);
    return j;
}

int main() {
    float c, t;
    int m;
    printf("Digite o valor do emprestimo (c) em Reais: ");
    scanf("%f", &c);
    printf("Digite o numero de meses (m): ");
    scanf("%d", &m);
    printf("Digite a taxa de juros mensal (t) em porcentagem: ");
    scanf("%f", &t);

    float juros = calcularJuros(c, m, t);
    printf("Os juros cobrados serao de: %.2f reais\n", juros);

    return 0;
}
