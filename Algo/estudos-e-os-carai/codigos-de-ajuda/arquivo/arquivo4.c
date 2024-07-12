#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char linha[100];
    
    arquivo = fopen("dados.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    
    printf("Digite algo para escrever no arquivo (Ctrl+D para finalizar):\n");
    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        fprintf(arquivo, "%s", linha);
    }
    
    printf("Texto gravado no arquivo com sucesso.\n");
    
    fclose(arquivo);
    
    return 0;
}
