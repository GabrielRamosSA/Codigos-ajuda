#include <stdio.h>

int main (){
    int n;
    printf("Digite um numero menor que 20: ");
    scanf("%d", &n);
    if (n > 20)
    {
        printf("Numero acima de 20 nao da carai");
    } else
    printf("O numero digitado foi %d", n);
    
}