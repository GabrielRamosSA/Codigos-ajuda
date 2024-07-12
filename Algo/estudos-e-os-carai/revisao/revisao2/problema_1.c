#include <stdio.h>
#include <stdlib.h>

int troco_possivel(int troco)
{
    int notas[] = {2, 5, 10, 20, 50, 100};

    for (int i = 0; i <= 6; i++)
    {
        for (int j = i; j <= 6; j++)
        {
            if (notas[i] + notas[j] == troco)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int N, M;
    char arquivo_entrada[50], arquivo_saida[50];
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", arquivo_entrada);
    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", arquivo_saida);

    FILE *entrada = fopen(arquivo_entrada, "w");
    FILE *saida = fopen(arquivo_saida, "w");

    while (1)
    {   
            scanf("%d %d", &N, &M);

            int troco = M - N;
            if (troco_possivel(troco))
            {
                fprintf(saida, "possible\n");
            }
            else if(N == 0 && M == 0){
                break;
            }
            else
            {
                fprintf(saida, "impossible\n");
            }
    }

    fclose(entrada);
    fclose(saida);
    return 0;
}
