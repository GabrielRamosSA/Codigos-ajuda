#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    char matricula[100];
    float notas[3];
} Aluno;

int main()
{
    int i, quantAlunos;
    char nomeArquivo[100]; 
    Aluno aluno;

    printf("Digite o nome do arquivo a ser criado: ");
    scanf("%s", nomeArquivo); 

    FILE *file = fopen(nomeArquivo, "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantAlunos);
    for (i = 1; i < quantAlunos; i++)
    {
        printf("Digite o nome do aluno %d: ", i);
        scanf("%s", aluno.nome);

        printf("Digite a matricula do aluno %d: ", i);
        scanf("%s", aluno.matricula);

        printf("Digite as notas do aluno %d: ", i);
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &aluno.notas[j]);
        }

        fprintf(file, "Nome: %s\n", aluno.nome);
        fprintf(file, "Matrícula: %s\n", aluno.matricula);
        fprintf(file, "Notas: %.2f, %.2f, %.2f\n", aluno.notas[0], aluno.notas[1], aluno.notas[2]);
        printf("\n");
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Dados salvos com sucesso em %s!\n", nomeArquivo);

    return 0;
}
