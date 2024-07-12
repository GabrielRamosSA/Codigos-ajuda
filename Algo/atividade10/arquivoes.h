#ifndef ARQUIVOES_H
#define ARQUIVOES_H

#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

// Função para copiar strings
void stringCopy(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// Função para comparar strings
int stringCompare(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

// Função para salvar os dados dos alunos em um arquivo
void salvarDados(Aluno *turma, int n, const char *nomeArquivo) {
    FILE *file = fopen(nomeArquivo, "w");
    if (!file) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d %s %f %f %f\n", turma[i].matricula, turma[i].nome, turma[i].notas[0], turma[i].notas[1], turma[i].notas[2]);
    }
    fclose(file);
}

// Função para comparar alunos por matrícula
int comparaPorMatricula(const void *a, const void *b) {
    Aluno *alunoA = (Aluno *)a;
    Aluno *alunoB = (Aluno *)b;
    return (alunoA->matricula - alunoB->matricula);
}

// Função para comparar alunos por nome
int comparaPorNome(const void *a, const void *b) {
    Aluno *alunoA = (Aluno *)a;
    Aluno *alunoB = (Aluno *)b;
    return stringCompare(alunoA->nome, alunoB->nome);
}

// Função para restaurar os dados dos alunos de um arquivo
void restaurarDados(const char *nomeArquivo) {
    FILE *file = fopen(nomeArquivo, "r");
    if (!file) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    Aluno turma[1000];
    int n = 0;
    while (fscanf(file, "%d %s %f %f %f", &turma[n].matricula, turma[n].nome, &turma[n].notas[0], &turma[n].notas[1], &turma[n].notas[2]) != EOF) {
        n++;
    }
    fclose(file);

    int opcao;
    printf("Deseja mostrar os alunos ordenados por (1) matrícula ou (2) nome? ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        qsort(turma, n, sizeof(Aluno), comparaPorMatricula);
    } else if (opcao == 2) {
        qsort(turma, n, sizeof(Aluno), comparaPorNome);
    } else {
        printf("Opção inválida.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("Matricula: %d, Nome: %s, Notas: %.2f %.2f %.2f\n", turma[i].matricula, turma[i].nome, turma[i].notas[0], turma[i].notas[1], turma[i].notas[2]);
    }
}

#endif // ARQUIVOES_H
