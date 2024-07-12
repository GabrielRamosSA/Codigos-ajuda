#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario f = {"Joao", 30, 2500.0};
    Funcionario f_lido;
    
    // Escrevendo em arquivo binário
    arquivo = fopen("funcionarios.bin", "wb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    
    fwrite(&f, sizeof(Funcionario), 1, arquivo);
    fclose(arquivo);
    
    // Lendo de arquivo binário
    arquivo = fopen("funcionarios.bin", "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    
    fread(&f_lido, sizeof(Funcionario), 1, arquivo);
    
    printf("Funcionário lido do arquivo:\n");
    printf("Nome: %s\n", f_lido.nome);
    printf("Idade: %d\n", f_lido.idade);
    printf("Salário: %.2f\n", f_lido.salario);
    
    fclose(arquivo);
    
    return 0;
}
