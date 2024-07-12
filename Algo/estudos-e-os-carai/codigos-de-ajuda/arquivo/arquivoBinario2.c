#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario f1 = {"Carlos", 28, 3500.0};
    Funcionario f2 = {"Ana", 25, 3000.0};
    
    arquivo = fopen("funcionarios.bin", "wb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    
    fwrite(&f1, sizeof(Funcionario), 1, arquivo);
    fwrite(&f2, sizeof(Funcionario), 1, arquivo);
    
    fclose(arquivo);
    
    printf("Funcionários gravados em arquivo binário com sucesso.\n");
    
    return 0;
}
