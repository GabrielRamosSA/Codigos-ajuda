#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complexo;

void somaComplexo(Complexo num1, Complexo num2, Complexo *num3) {
    num3->real = num1.real + num2.real;
    num3->imag = num1.imag + num2.imag;
}
int main() {
    Complexo num1, num2, num3;

    while (1) {
        if (scanf("%f %f %f %f", &num1.real, &num1.imag, &num2.real, &num2.imag) != 4)
            break;

        somaComplexo(num1, num2, &num3);

        printf("%.1f + %.1fi\n", num3.real, num3.imag);
    }

    return 0;
}