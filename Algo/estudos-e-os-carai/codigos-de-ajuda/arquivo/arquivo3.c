#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char linha[100];
    
    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    
    printf("Conteúdo do arquivo:\n");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    
    fclose(arquivo);
    
    return 0;
}
