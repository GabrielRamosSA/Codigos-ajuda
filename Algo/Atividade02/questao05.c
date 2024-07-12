#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[20];
    float altura;
    float peso;
    float ira;
};

int main()
{
    struct aluno turma[5];
    int i;

    for (i = 0; i < 5; i++)
    {
            scanf("%s %f %f %f", turma[i].nome, &turma[i].altura, &turma[i].peso, &turma[i].ira);
        
    }

    float mediaPeso = 0, mediaAltura = 0, mediaIra = 0;

    for (i = 0; i < 5; i++)
    {
        mediaPeso += turma[i].peso;
        mediaAltura += turma[i].altura;
        mediaIra += turma[i].ira;
    }
    mediaPeso /= 5;
    mediaAltura /= 5;
    mediaIra /= 5;
    
    int maiorpeso = 0, maiorira = 0, maioraltura = 0;

    for (i = 1; i < 5; i++)
    {
        if (turma[i].peso > turma[maiorpeso].peso)
            maiorpeso = i;
        if (turma[i].ira > turma[maiorira].ira)
            maiorira = i;
        if (turma[i].altura > turma[maioraltura].altura)
            maioraltura = i;
    }

    printf("\nMedia de Peso: %.3f \n", mediaPeso);
    printf("Media de Altura: %.3f \n", mediaAltura);
    printf("Media de IRA: %.3f \n", mediaIra);
    printf("\n");
    printf("Aluno com maior peso: %s (%.3f)\n", turma[maiorpeso].nome, turma[maiorpeso].peso);
    printf("Aluno com maior altura: %s (%.3f)\n", turma[maioraltura].nome, turma[maioraltura].altura);
    printf("Aluno com maior IRA: %s (%.3f)\n", turma[maiorira].nome, turma[maiorira].ira);

    return 0;
}
