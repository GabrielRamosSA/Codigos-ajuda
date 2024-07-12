#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario f;
    
    arquivo = fopen("funcionarios.bin", "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    
    while (fread(&f, sizeof(Funcionario), 1, arquivo) == 1) {
        printf("Nome: %s, Idade: %d, Salário: %.2f\n", f.nome, f.idade, f.salario);
    }
    
    fclose(arquivo);
    
    return 0;
}
