#include <stdio.h>
#include <math.h>

void calcularRaizes(float a, float b, float c) {
    float discriminante = b*b - 4*a*c;

    if (discriminante > 0) {
        float raiz1 = (-b + sqrt(discriminante)) / (2*a);
        float raiz2 = (-b - sqrt(discriminante)) / (2*a);
        printf("As raízes da equacao sao: %.2f e %.2f\n", raiz1, raiz2);
    } else if (discriminante == 0) {
        float raiz = -b / (2*a);
        printf("A unica raiz da equacao eh: %.2f\n", raiz);
    } else {
        printf("Nao existem raizes.\n");
    }
}

int main() {
    float a, b, c;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    calcularRaizes(a, b, c);

    return 0;
}
