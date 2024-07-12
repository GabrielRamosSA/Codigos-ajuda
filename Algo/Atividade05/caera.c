#include <stdio.h>

int main() {
    int N, horas, minutos, segundos;
    
    scanf("%d", &N);
    
    // Calculando horas, minutos e segundos
    horas = N / 3600;
    minutos = (N % 3600) / 60;
    segundos = N % 60;
    
    // Imprimindo o tempo no formato desejado
    printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
}

