#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char *valor;
    char *naipe;
} Carta;


void preenche(Carta *deck, char *valores[], char *naipes[]) {
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            deck[i * 13 + j].valor = valores[j];
            deck[i * 13 + j].naipe = naipes[i];
        }
    }
}


void embaralha(Carta *deck) {
    int i, j;
    Carta temp;
    srand(time(NULL)); 

    for (i = 0; i < 52; i++) {
        j = rand() % 52; 

        temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

void imprime(Carta *deck) {
    int i;

    for (i = 0; i < 52; i++) {
        printf("%s de %s\n", deck[i].valor, deck[i].naipe);
    }
}

int main() {
    char *valores[] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};
    char *naipes[] = {"Paus", "Ouros", "Copas", "Espadas"};
    Carta baralho[52];
    int opcao;

    preenche(baralho, valores, naipes);

    scanf("%d", &opcao);

    if (opcao == 1) {
        imprime(baralho);
    } else if (opcao == 0) {
        embaralha(baralho);
        imprime(baralho);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
