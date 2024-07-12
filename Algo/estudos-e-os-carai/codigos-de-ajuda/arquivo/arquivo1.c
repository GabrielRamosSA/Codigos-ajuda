#include <stdio.h>

int main() {
    FILE *arquivo;
    char texto[100];
    
    arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    printf("Digite algo para escrever no arquivo:\n");
    fgets(texto, 100, stdin);
    
    fprintf(arquivo, "%s", texto);
    printf("Texto gravado no arquivo com sucesso.\n");
    
    fclose(arquivo);
    
    return 0;
}
