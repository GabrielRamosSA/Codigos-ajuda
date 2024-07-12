#include <stdio.h>

// Função que inverte os dígitos de um número inteiro
int inverter_digitos(int num) {
    int inverso = 0;

    // Enquanto houver dígitos no número
    while (num != 0) {
        // Extrai o último dígito
        int digito = num % 10;
        // Adiciona o último dígito ao inverso, multiplicando por 10 para posicionar corretamente
        inverso = inverso * 10 + digito;
        // Remove o último dígito do número original
        num /= 10;
    }

    return inverso;
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número entre 1000 e 9999
    printf("Insira um numero inteiro entre 1000 e 9999: ");
    scanf("%d", &numero);

    // Verifica se o número está no intervalo válido
    if (numero < 1000 || numero > 9999) {
        printf("Numero invalido! Por favor, insira um numero entre 1000 e 9999.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Chama a função para inverter os dígitos e armazena o resultado
    int resultado = inverter_digitos(numero);

    // Exibe o número com os dígitos invertidos
    printf("O numero com os digitos invertidos e: %d\n", resultado);

    return 0;
}
