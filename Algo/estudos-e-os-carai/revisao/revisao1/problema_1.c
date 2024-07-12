
int main() {
    int nCasas, i, k;
    
    scanf("%d", &nCasas);
    int vetor[nCasas];

    for (i = 0; i < nCasas; i++) {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &k);
    // esquerda pra a primeira casa e direita para a ultima casa
    int esquerda = 0;
    int direita = nCasas - 1;
    int a = 0, b = 0;
    //se soma for igual a K ele para, senao, se soma for menor que K, ele vai incrementar ate ser igual a K, se a soma for maior que K, ele vai decrementar ate ser igual a K
    while (esquerda < direita) {
        int soma = vetor[esquerda] + vetor[direita];
        if (soma == k) {
            a = vetor[esquerda];
            b = vetor[direita];
            break;
        } else if (soma < k) {
            esquerda++;
        } else {
            direita--;
        }
    }

    if (a != 0 || b != 0) { 
        printf("%d %d\n", a, b);
    }

    return 0;
}