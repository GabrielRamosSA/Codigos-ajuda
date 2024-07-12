#include <stdio.h>

int main()
{
    float vPassagem;
    char opcao;
    int tipoPassagem;
    printf("Digite qual regiao deseja viajar\n");
    printf("a - Norte\n");
    printf("b - Nordeste\n");
    printf("c - Centro-Oeste\n");
    printf("d - Sul\n");
    scanf("%c", &opcao);
    printf("Digite (0) para ida ou (1) para ida e volta: ");
    scanf("%d", &tipoPassagem);

    switch (opcao)
    {
    case 'a':
    case 'A':
        if (tipoPassagem == 0)
        {
            vPassagem = 500.00;
            printf("Valor da sua passagem: %.2f", vPassagem);
        }
        else
        {
            vPassagem = 900.00;
            printf("Valor da sua passagem: %.2f", vPassagem);
        }

        break;
    case 'b':
    case 'B':
        if (tipoPassagem == 0)
        {
            vPassagem = 350.00;
            printf("Valor da sua passagem: %.2f", vPassagem);
        }
        else
        {
            vPassagem = 650.00;
            printf("Valor da sua passagem: %.2f", vPassagem);
        }

        break;
    case 'c':
    case 'C':
        if (tipoPassagem == 0)
        {
            vPassagem = 350.00;
            printf("Valor da sua passagem: %.2f", vPassagem);
        }
        else
        {
            vPassagem = 600.00;
            printf("Valor da sua passagem: %.2f", vPassagem);
        }

        break;
    case 'd':
    case 'D':
        if (tipoPassagem == 0)
        {
            vPassagem = 300.00;
            printf("Valor da sua passagem: %.2f", vPassagem);
        }
        else
        {
            vPassagem = 550.00;
            printf("Valor da sua passagem: %.2f", vPassagem);
        }

        break;

    default:
       if ((opcao != 'a' || opcao != 'A' || opcao != 'b' || opcao != 'B' || opcao != 'c' || opcao != 'C' || opcao != 'd' || opcao != 'D')) {
        printf("Opcao ou tipo de passagem invalida");
        }
        break;
        
    }
   
    return 0;
}