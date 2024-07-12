#include <stdio.h>
#include <stdlib.h>
#include "arquivoes.h"
#include "aluno.h"

#define MAX_ALUNOS 1000

int main() {
    int operacao;
    char nomeArquivo[100];

    printf("Sistema de backup de dados\n");
    printf("Informe a operação desejada (1-salvar, 2-restaurar): ");
    scanf("%d", &operacao);
    printf("Informe o nome do arquivo de backup: ");
    scanf("%s", nomeArquivo);

    if (operacao >=3) {
        printf("Operação inválida.\n");
        return 0;
    } else if (operacao == 2) {
        restaurarDados(nomeArquivo);
        printf("Dados restaurados com sucesso do arquivo %s.\n", nomeArquivo);
    } else {
        int n;
        printf("Informe o número de alunos: ");
        scanf("%d", &n);
        if (n > MAX_ALUNOS) {
            printf("Número de alunos excede a capacidade máxima (%d).\n", MAX_ALUNOS);
            return 1;
        }
        Aluno turma[MAX_ALUNOS];
        for (int i = 0; i < n; i++) {
            printf("Informe os dados do aluno %d (matricula nome notas(tres notas)): ", i + 1);
            scanf("%d %s %f %f %f", &turma[i].matricula, turma[i].nome, &turma[i].notas[0], &turma[i].notas[1], &turma[i].notas[2]);
        }
        salvarDados(turma, n, nomeArquivo);
        printf("Dados salvos com sucesso no arquivo %s.\n", nomeArquivo);
    }

    printf("Operação concluída com sucesso!\n");
    return 0;
}
