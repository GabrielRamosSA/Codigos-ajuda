#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[20];
    float altura;
    float peso;
    float ira;
};

int main() {
    
    struct aluno c[5];
    int i;
    int maiorpeso = 0, maiorira = 0, maioraltura = 0;

    for(i = 0; i < 5; i++) {
        scanf("%s %f %f %f", c[i].nome, &c[i].altura, &c[i].peso, &c[i].ira);
    }


    float mediap = 0, mediaa = 0, mediai = 0;
    for(i = 0; i < 5; i++) {
        mediap += c[i].peso;
        mediaa += c[i].altura;
        mediai += c[i].ira;
    }
    mediap /= 5;
    mediaa /= 5;
    mediai /= 5;

    for(i = 1; i < 5; i++) {
        if(c[i].peso > c[maiorpeso].peso)
            maiorpeso = i;
        if(c[i].ira > c[maiorira].ira)
            maiorira = i;
        if(c[i].altura > c[maioraltura].altura)
            maioraltura = i;
    }

    printf("\nMedia de Peso: %.3f \n", mediap);
    printf("Media de Altura: %.3f \n", mediaa);
    printf("Media de IRA: %.3f \n", mediai);
    printf("\n");
    printf("Aluno com maior peso: %s (%.3f)\n", c[maiorpeso].nome, c[maiorpeso].peso);
    printf("Aluno com maior altura: %s (%.3f)\n", c[maioraltura].nome, c[maioraltura].altura);
    printf("Aluno com maior IRA: %s (%.3f)\n", c[maiorira].nome, c[maiorira].ira);

    return 0;
}