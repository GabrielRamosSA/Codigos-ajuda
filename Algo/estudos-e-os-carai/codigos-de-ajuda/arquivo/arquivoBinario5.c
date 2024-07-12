#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario novoFuncionario = {"Pedro", 32, 4000.0};
    
    arquivo = fopen("funcionarios.bin", "ab");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    
    fwrite(&novoFuncionario, sizeof(Funcionario), 1, arquivo);
    
    fclose(arquivo);
    
    printf("Novo funcionário adicionado ao arquivo binário com sucesso.\n");
    
    return 0;
}
