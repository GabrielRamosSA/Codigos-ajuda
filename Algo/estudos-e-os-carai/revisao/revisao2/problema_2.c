#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITENS 1000
#define ARQUIVO "celulares.dat"

typedef struct {
    int codigo;
    char descricao[30];
    float preco;
} Celular;

void carregarDados(Celular celulares[], int *contador) {
    FILE *file = fopen(ARQUIVO, "rb");
    if (file != NULL) {
        fread(contador, sizeof(int), 1, file);
        fread(celulares, sizeof(Celular), *contador, file);
        fclose(file);
    }
}

void salvarDados(Celular celulares[], int contador) {
    FILE *file = fopen(ARQUIVO, "wb");
    if (file != NULL) {
        fwrite(&contador, sizeof(int), 1, file);
        fwrite(celulares, sizeof(Celular), contador, file);
        fclose(file);
    }
}

void cadastrar(Celular celulares[], int *contador) {
    if (*contador >= MAX_ITENS) {
        printf("Não é possível cadastrar mais itens.\n");
        return;
    }

    Celular novo;
    printf("Digite o codigo: ");
    scanf("%d", &novo.codigo);

    for (int i = 0; i < *contador; i++) {
        if (celulares[i].codigo == novo.codigo) {
            printf("Código já foi cadastrado!\n");
            return;
        }
    }

    printf("Digite a descricao: ");
    getchar(); 
    fgets(novo.descricao, sizeof(novo.descricao), stdin);
    novo.descricao[strcspn(novo.descricao, "\n")] = '\0'; 

    printf("Digite o preco: ");
    scanf("%f", &novo.preco);

    celulares[*contador] = novo;
    (*contador)++;
    salvarDados(celulares, *contador);
}

void visualizar(Celular celulares[], int contador) {
    for (int i = 0; i < contador; i++) {
        printf("item: \n%d, %s, %.2f\n", celulares[i].codigo, celulares[i].descricao, celulares[i].preco);
    }
}

void removerRegistro(Celular celulares[], int *contador) {
    int codigo;
    printf("Digite o codigo do item a ser removido: ");
    scanf("%d", &codigo);

    int index = -1;
    for (int i = 0; i < *contador; i++) {
        if (celulares[i].codigo == codigo) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Codigo não encontrado!\n");
        return;
    }

    for (int i = index; i < *contador - 1; i++) {
        celulares[i] = celulares[i + 1];
    }
    (*contador)--;
    salvarDados(celulares, *contador);
}

int main() {
    Celular celulares[MAX_ITENS];
    int contador = 0;
    carregarDados(celulares, &contador);

    while (1) {
        printf("\nInforme o modulo desejado:\n");
        printf("1 - Cadastrar\n");
        printf("2 - Visualizar\n");
        printf("3 - Remover registro\n");
        printf("4 - Finalizar\n");
        int opcao;
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(celulares, &contador);
                break;
            case 2:
                visualizar(celulares, contador);
                break;
            case 3:
                removerRegistro(celulares, &contador);
                break;
            case 4:
                salvarDados(celulares, contador);
                return 0;
            default:
                printf("Opção inválida!\n");
        }
    
    }

    return 0;
}
