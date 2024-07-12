#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

void exibirFuncionario(Funcionario f) {
    printf("Nome: %s\n", f.nome);
    printf("Idade: %d\n", f.idade);
    printf("Salario: %.2f\n", f.salario);
}

int main() {
    Funcionario f1 = {"Maria", 25, 3000.0};
    
    exibirFuncionario(f1);
    
    return 0;
}
